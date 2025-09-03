/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sozbek <sozbek@student.42kocaeli.tr>       #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025-09-03 18:08:33 by sozbek            #+#    #+#             */
/*   Updated: 2025-09-03 18:08:33 by sozbek           ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <string>

class Contact
{
    private:
            std::string _firstName;
            std::string _lastName;
            std::string _nickname;
            std::string _phoneNumber;
            std::string _darkestSecret;
            bool        _isEmpty;

    public:
        Contact(void);
        ~Contact(void);

        void fillContact(void);
        void displayFull(void) const;
        void displaySummary(int index) const;
};



#endif