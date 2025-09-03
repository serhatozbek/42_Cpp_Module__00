/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sozbek <sozbek@student.42kocaeli.tr>       #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025-09-03 18:08:45 by sozbek            #+#    #+#             */
/*   Updated: 2025-09-03 18:08:45 by sozbek           ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include "iostream"
#include "iomanip"
#include <cstdlib>

PhoneBook::PhoneBook(void){
     _oldestContactIndex = 0;
     _contactCount = 0;
    std::cout<< "PhoneBook is ready !" << std::endl;
}

PhoneBook::~PhoneBook(void){
    std::cout << "PhoneBook is closing, all contacts will be lost." << std::endl;
}

void PhoneBook::addContact(void){
    _contacts[_oldestContactIndex].fillContact();
    _oldestContactIndex = (_oldestContactIndex + 1) % 8;
    if (_contactCount < 8)
		_contactCount++;
}

void PhoneBook::searchContact(void) const{
    std::cout << "-------------------------------------------" << std::endl;
    std::cout << "|     Index|First Name| Last Name|  Nickname|" << std::endl;
    std::cout << "-------------------------------------------" << std::endl;
    for (int i = 0; i < 8; i++)
    {
        _contacts[i].displaySummary(i);
    }
    std::cout << "-------------------------------------------" << std::endl;

    if (_contactCount == 0) {
		std::cout << "PhoneBook is empty. Use ADD to create a contact." << std::endl;
		return;
	}
    std::cout << "Enter the index of the contact to display: ";
	std::string input;
	std::getline(std::cin, input);

    if(std::cin.eof())
        return;
    if(input.length()== 1 && input[0] >= '0' && input[0] <= '7'){

        int index = std::atoi(input.c_str());

        if(index >= 0 && index < _contactCount){
            _contacts[index].displayFull();
        }
        else{
            std::cout << "Error: Contact at this index is empty." << std::endl;

        }
    }else {
		std::cout << "Error: Invalid index. Please enter a single digit between 0 and " << (_contactCount - 1) << std::endl;
	}
    
}