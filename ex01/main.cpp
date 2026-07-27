/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lluzembo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/27 12:49:31 by lluzembo          #+#    #+#             */
/*   Updated: 2026/07/27 17:38:59 by lluzembo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "utils.hpp"

int main(void)
{
    std::string op;

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
        std::cin >> op;

        if (op == "ADD" || op == "add")
        {   
            add_contact();
        }
        else if (op == "SEARCH" || op == "search")
            std::cout << "Boa Vamos Buscar por dados\n";
        else if (op == "EXIT" || op == "exit")
        {
            std::cout << "Boa Vamos saindo";
            break ;
        }
        else
            std::cout << "escolha uma opção válida\n";
    }
    return (1);
}