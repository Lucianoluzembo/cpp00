/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lluzembo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/27 12:49:31 by lluzembo          #+#    #+#             */
/*   Updated: 2026/07/27 19:59:26 by lluzembo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "utils.hpp"

std::string toUpper(std::string str)
{
    size_t i = 0;

    while (str.length() > i)
    {
        if (str[i] >= 'a' && str[i] <= 'z')
            str[i] -= 32;
        i++;
    }
    return (str);
}

int main(void)
{
    std::string op;
    Contact contact;

    while(true)
    {
        std::system("clear");
        std::cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";
        std::cout << "   Welcome to PhoneNook Mr Bug  1.0\n";
        std::cout << "      Chose Some Option above\n ";
        std::cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";
        std::cout << "[   ADD  ] -- Create a new contact\n";
        std::cout << "[ SEARCH ] -- Find Some Contact\n";
        std::cout << "[  EXIT  ] -- Exit and clean contacts\n";
        std::getline(std::cin, op);

        op = toUpper(op);
        if (op == "ADD")
            add_contact(contact);
        else if (op == "SEARCH")
            std::cout << "Boa Vamos Buscar por dados\n";
        else if (op == "EXIT")
        {
            std::cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";
            std::cout << "  ⏻ Saindo do phonebook Mr bug 1.0...\n";
            std::cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";
            break ;
        }
        else
            std::cout << "escolha uma opção válida\n";
    }
    return (1);
}