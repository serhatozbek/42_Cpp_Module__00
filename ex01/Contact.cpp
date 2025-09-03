/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sozbek <sozbek@student.42kocaeli.tr>       #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025-09-03 18:08:27 by sozbek            #+#    #+#             */
/*   Updated: 2025-09-03 18:08:27 by sozbek           ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"
#include <iostream>
#include <iomanip>

static bool isAllWhitespace(const std::string& str) {
    for (size_t i = 0; i < str.length(); i++) {
        if (!isspace(str[i])) {
            return (false);
        }
    }
    return (true);
}

static bool isAllAlpha(const std::string& str) {
    for (size_t i = 0; i < str.length(); i++) {
        if (!isalpha(str[i])) {
            return (false);
        }
    }
    return (true);
}

static bool isAllDigit(const std::string& str) {
    for (size_t i = 0; i < str.length(); i++) {
        if (!isdigit(str[i])) {
            return (false);
        }
    }
    return (true);
}

static std::string truncate(std::string str) {
    if (str.length() > 10)
        return (str.substr(0, 9) + ".");
    return (str);
}

static bool isAllPrintable(const std::string& str) {
    for (size_t i = 0; i < str.length(); i++) {
        if (str[i] < 32 || str[i] == 127) {
            return false;
        }
    }
    return (true);
}

Contact::Contact(void) {
    _isEmpty =true;
    std::cout << "Contact Created !" << std::endl; 
}

Contact::~Contact(void){
    std::cout << "Contact Destroyed !"<< std::endl;
}

void Contact::fillContact(void)
{
    std::string buffer;

    while (true) {
        std::cout << "Enter First Name: ";
        std::getline(std::cin, buffer);
        if (std::cin.eof()) return;
        if (!buffer.empty() && isAllAlpha(buffer)) {
            _firstName = buffer;
            break;
        }
        std::cout << "Invalid input. Please use letters only." << std::endl;
    }
    while (true) {
        std::cout << "Enter Last Name: ";
        std::getline(std::cin, buffer);
        if (std::cin.eof()) return;
        if (!buffer.empty() && isAllAlpha(buffer)) {
            _lastName = buffer;
            break;
        }
        std::cout << "Invalid input. Please use letters only." << std::endl;
    }
    while (true) {
        std::cout << "Enter Nickname: ";
        std::getline(std::cin, buffer);
        if (std::cin.eof()) return;
        if (!buffer.empty()&& !isAllWhitespace(buffer) && isAllPrintable(buffer)) {
            _nickname = buffer;
            break;
        }
        std::cout << "Field cannot be empty." << std::endl;
    }
    while (true) {
        std::cout << "Enter Phone Number: ";
        std::getline(std::cin, buffer);
        if (std::cin.eof()) return;
        if (!buffer.empty() && isAllDigit(buffer)) {
            _phoneNumber = buffer;
            break;
        }
        std::cout << "Invalid input. Please use numbers only." << std::endl;
    }
    while (true) {
        std::cout << "Enter Darkest Secret: ";
        std::getline(std::cin, buffer);
        if (std::cin.eof()) return;
        if (!buffer.empty() && !isAllWhitespace(buffer) && isAllPrintable(buffer)) {
            _darkestSecret = buffer;
            break;
        }
        std::cout << "Field cannot be empty." << std::endl;
    }
    _isEmpty = false;
    std::cout << "Contact added successfully!" << std::endl;
}


void Contact::displayFull(void) const{
    if(_isEmpty){
        std::cout << "This contact slot is empty"<< std::endl;
        return;
    }

    std::cout << "-------------------------------------------" << std::endl;
    std::cout << "First Name:     " << _firstName << std::endl;
    std::cout << "Last Name:      " << _lastName << std::endl;
    std::cout << "Nickname:       " << _nickname << std::endl;
    std::cout << "Phone Number:   " << _phoneNumber << std::endl;
    std::cout << "Darkest Secret: " << _darkestSecret << std::endl;
    std::cout << "-------------------------------------------" << std::endl;
}
void Contact::displaySummary(int index) const {
    if (_isEmpty)
        return;

    std::cout << "|" << std::setw(10) << index;
    std::cout << "|" << std::setw(10) << truncate(_firstName);
    std::cout << "|" << std::setw(10) << truncate(_lastName);
    std::cout << "|" << std::setw(10) << truncate(_nickname);
    std::cout << "|" << std::endl;
}

