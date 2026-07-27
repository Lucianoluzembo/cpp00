/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   search.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lluzembo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/27 19:57:25 by lluzembo          #+#    #+#             */
/*   Updated: 2026/07/27 20:33:43 by lluzembo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "utils.hpp"

void    show_all_contacts(Contact contact)
{
    std::system("clear");
    std::cout << "+~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~+\n";
    std::cout << "|             Phone Book mr bug 1.0   My contacts        |\n";
    std::cout << "+~~~~~~~~~~~~+~~~~~~~~~~~~~+~~~~~~~~~~~~+~~~~~~~~~~~~~~~~+\n";
    std::cout << "|     NAME   |   SURNAME   |  NICK NAME |  PHONE NUMBER  |\n";
    std::cout << "+~~~~~~~~~~~~+~~~~~~~~~~~~~+~~~~~~~~~~~~+~~~~~~~~~~~~~~~~+\n"; 
    std::system("sleep 5");
    (void)contact;
}

void    find_some_contact(Contact contact)
{
    std::system("clear");
    std::cout << "+~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~+\n";
    std::cout << "|            Phone Book mr bug 1.0   Search contac       |\n";
    std::cout << "+~~~~~~~~~~~~+~~~~~~~~~~~~~+~~~~~~~~~~~~+~~~~~~~~~~~~~~~~+\n";
    std::cout << "|     NAME   |   SURNAME   |  NICK NAME |  PHONE NUMBER  |\n";
    std::cout << "+~~~~~~~~~~~~+~~~~~~~~~~~~~+~~~~~~~~~~~~+~~~~~~~~~~~~~~~~+\n"; 
    std::system("sleep 5");
    (void)contact;
}

void    search(Contact contact)
{
    std::string op;

    while (true)
    {
        std::system("clear");
        std::cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";
        std::cout << "   [ SEARCH ] -- Find yours contacts\n";
        std::cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";
        std::cout << " [0] See all contacts\n";
        std::cout << " [1] Search some contact\n";
        std::cout << " [3] back to menu\n";
        std::getline(std::cin, op);
        if (op == "0")
            show_all_contacts(contact);
        else if (op == "1")
            find_some_contact(contact);
        else if (op == "3")
            break ;
    }

}