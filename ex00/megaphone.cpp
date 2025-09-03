/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sozbek <sozbek@student.42kocaeli.tr>       #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025-09-03 21:58:11 by sozbek            #+#    #+#             */
/*   Updated: 2025-09-03 21:58:11 by sozbek           ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cctype>

int main(int ac, char **arg)
{
    if(ac == 1)
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
    else
    {
        for (int i = 1; i < ac; ++i)
        {
            for (int j = 0; arg[i][j] != '\0'; ++j)
            {
                std::cout << (char)toupper(arg[i][j]);
            }
        }
        std::cout << std::endl;
    }
    return 0;
}