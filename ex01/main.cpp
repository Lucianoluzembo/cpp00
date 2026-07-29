/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lluzembo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/27 12:49:31 by lluzembo          #+#    #+#             */
/*   Updated: 2026/07/29 14:47:36 by lluzembo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "utils.hpp"

int main(void)
{
    std::string op;
    PhoneBook phonebook;
    while(true)
    {
        std::system("clear");
        std::cout << "+~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~+" << std::endl;
        std::cout << "|   Welcome to PhoneNook Mr Bug  1.0  |" << std::endl;
        std::cout << "|      Chose Some Option above        |" << std::endl;
        std::cout << "+~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~+" << std::endl;
        std::cout << "[   ADD  ] -- Create a new contact" << std::endl;
        std::cout << "[ SEARCH ] -- Find my Contacts" << std::endl;
        std::cout << "[  EXIT  ] -- Exit and clean contacts" << std::endl;
        if(!std::getline(std::cin, op))
            return (exit_progam_message(), 1);
        if (op == "ADD")
        {
            if (!phonebook.add_contact())
                return (1);
        }
        else if (op == "SEARCH")
        {
            if (!phonebook.search_contact())
                return (1);
        }
        else if (op == "EXIT")
        {
            exit_progam_message();
            break ;
        }
        else
            std::cout << "escolha uma opção válida" << std::endl;
    }
    return (1);
}