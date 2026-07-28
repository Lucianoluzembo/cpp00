/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   search.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lluzembo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/27 19:57:25 by lluzembo          #+#    #+#             */
/*   Updated: 2026/07/28 19:55:14 by lluzembo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "utils.hpp"

int    see_specific_contact(Contact *contact, int id)
{
    std::string name =  contact[id].getName();
    if (name.empty())
        return ((std::cout << "              data not found\n"), 0);
    std::cout << "+~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~+\n";
    std::cout << "|   Phone Book mr bug 1.0  contact      [" << id << "   |\n";
    std::cout << "+~~~~~~~~~~+~~~~~~~~~~+~~~~~~~~~~+~~~~~~~~~~+\n";
    std::cout << " NAME : " << contact[id].getName() << "\n";
    std::cout << " SURNAME : " << contact[id].getSurname() << "\n";
    std::cout << " NICKNAME : " << contact[id].getNickname() << "\n";
    std::cout << " PHONE NUMBER: " <<  contact[id].getPhoneNumber() << "\n";
    std::cout << "+~~~~~~~~~~+~~~~~~~~~~+~~~~~~~~~~+~~~~~~~~~~+\n";
    std::system("sleep 10");
    return (1);
}

void    print_phone_book_collum(std::string str)
{
    size_t i;
    size_t  first_spaces;

    if (10 <= str.length())
        first_spaces = 0;
    else
        first_spaces = 10 - str.length();
    i = 0;
    while (i++ < first_spaces)
        std::cout << " ";
    i = 0;
    while (i < 10 && i < str.length())
    {
        if (!(i + 1 == 9 && str[i + 1]))
            std::cout << str[i];
        i++;
    }
    if (10 < str.length())
        std::cout << ".|";
    else
        std::cout << "|";
}

void print_phone_book_indice(int i)
{
    int  j = 9;

    std::cout << "|";
    while (j--)
        std::cout << " ";
    std::cout << i << "|";
}

int    show_all_contacts(Contact *contact, int current)
{
    std::string name;
    std::string surname;
    std::string nickname;
    std::string phone;
    std::string op;
    int         i = 0;


    std::system("clear");
    std::cout << "+~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~+\n";
    std::cout << "|   Phone Book mr bug 1.0   My contacts     |\n";
    std::cout << "+~~~~~~~~~~+~~~~~~~~~~+~~~~~~~~~~+~~~~~~~~~~+\n";
    std::cout << "|     INDEX|      NAME|   SURNAME|  NICKNAME|\n";
    std::cout << "+~~~~~~~~~~+~~~~~~~~~~+~~~~~~~~~~+~~~~~~~~~~+\n";

    while(i < current)
    {
        name = contact[i].getName();
        surname = contact[i].getSurname();
        nickname = contact[i].getNickname();
        phone = contact[i].getPhoneNumber();
        print_phone_book_indice(i);
        print_phone_book_collum(name);
        print_phone_book_collum(surname);
        print_phone_book_collum(nickname);
        std::cout << "\n+~~~~~~~~~~+~~~~~~~~~~+~~~~~~~~~~+~~~~~~~~~~+\n";
        i++;
    }
    while (true)
    {
        std::cout << "[0 - 7] to see specify contact\n";
        if(!std::getline(std::cin, op))
            return (0);
        if (op.length() == 1 && op[0] >= '0' && op[0] <= '7')
            see_specific_contact(contact, op[0] - 48);
        else
            return (std::cout << "Invalid option...\n", 1);
    }
}

int    search(Contact *contact, int current)
{
    std::string op;

    show_all_contacts(contact, current);
    return (1);
}