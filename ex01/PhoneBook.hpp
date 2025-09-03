/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sozbek <sozbek@student.42kocaeli.tr>       #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025-09-03 18:08:50 by sozbek            #+#    #+#             */
/*   Updated: 2025-09-03 18:08:50 by sozbek           ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP
#include "Contact.hpp"

class PhoneBook{
    private:
    Contact _contacts[8];
    int _oldestContactIndex;
    int		_contactCount;

    public:
    PhoneBook(void);
    ~PhoneBook(void);

    void addContact(void);
    void searchContact(void) const;
};

#endif