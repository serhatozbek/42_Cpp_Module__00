/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sozbek <sozbek@student.42kocaeli.tr>       #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025-09-03 18:08:39 by sozbek            #+#    #+#             */
/*   Updated: 2025-09-03 18:08:39 by sozbek           ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "PhoneBook.hpp"

int main(void){
    PhoneBook myPhoneBook;
    std::string command;

    std::cout << "--- Welcome to Your Awesome PhoneBook ---" << std::endl;

    while (true)
    {
        std::cout << "Enter a command (ADD, SEARCH, EXIT):";
        std::getline(std::cin, command);

        if(std::cin.eof()){
            std::cout << std::endl << "Exiting PhoneBook. Goodbye!" << std::endl;
            break;
        }
        if(command == "ADD") {
            myPhoneBook.addContact();
        }else if(command == "SEARCH"){
            myPhoneBook.searchContact();
        }else if(command == "EXIT"){
            std::cout << "Exiting PhoneBook. Goodbye!" << std::endl;
			break;
        }else{
            std::cout << "Invalid input."<< std::endl;
        }
    }
    return 0;
}