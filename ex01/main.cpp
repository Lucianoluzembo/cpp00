/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lluzembo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/27 12:49:31 by lluzembo          #+#    #+#             */
/*   Updated: 2026/07/28 17:37:41 by lluzembo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "utils.hpp"

// std::string toUpper(std::string str)
// {
//     size_t i = 0;

//     while (str.length() > i)
//     {
//         if (str[i] >= 'a' && str[i] <= 'z')
//             str[i] -= 32;
//         i++;
//     }
//     return (str);
// }

int main(void)
{
    std::string op;
    Contact contact;

    while(true)
    {
        std::system("clear");
        std::cout << "+~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~+\n";
        std::cout << "|   Welcome to PhoneNook Mr Bug  1.0  |\n";
        std::cout << "|      Chose Some Option above        |\n";
        std::cout << "+~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~+\n";
        std::cout << "[   ADD  ] -- Create a new contact\n";
        std::cout << "[ SEARCH ] -- Find my Contacts\n";
        std::cout << "[  EXIT  ] -- Exit and clean contacts\n";
        if(!std::getline(std::cin, op))
            return (exit_progam_message(), 1);
        if (op == "ADD")
        {
            if (!add_contact(contact))
                return (1);
        }
        else if (op == "SEARCH")
        {
            if (!search(contact))
                return (1);
        }
        else if (op == "EXIT")
        {
            exit_progam_message();
            break ;
        }
        else
            std::cout << "escolha uma opção válida\n";
    }
    return (1);
}