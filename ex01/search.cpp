/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   search.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lluzembo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/27 19:57:25 by lluzembo          #+#    #+#             */
/*   Updated: 2026/07/28 12:55:23 by lluzembo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "utils.hpp"

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

void    show_all_contacts(Contact &contact)
{
    std::string name;
    std::string surname;
    std::string nickname;
    std::string phone;
    size_t list_size;

    name = contact.getName();
    surname = contact.getSurname();
    nickname = contact.getNickname();
    phone = contact.getPhoneNumber();
    list_size = 2;
    std::system("clear");
    std::cout << "+~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~+\n";
    std::cout << "|   Phone Book mr bug 1.0   Search contact  |\n";
    std::cout << "+~~~~~~~~~~+~~~~~~~~~~+~~~~~~~~~~+~~~~~~~~~~+\n";
    std::cout << "|      NAME|   SURNAME|  NICKNAME|     PHONE|\n";
    std::cout << "+~~~~~~~~~~+~~~~~~~~~~+~~~~~~~~~~+~~~~~~~~~~+\n";
    size_t i = 0;
    while(i < list_size)
    {
        std::cout << "|";
        print_phone_book_collum(name);
        print_phone_book_collum(surname);
        print_phone_book_collum(nickname);
        print_phone_book_collum(phone);
        std::cout << std::endl;
        i++;
    }
    std::system("sleep 20");
}

void    find_some_contact(Contact &contact)
{
    std::system("clear");
    std::cout << "+~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~+\n";
    std::cout << "|   Phone Book mr bug 1.0   Search contact  |\n";
    std::cout << "+~~~~~~~~~~+~~~~~~~~~~+~~~~~~~~~~+~~~~~~~~~~+\n";
    std::cout << "|      NAME|   SURNAME| NICK NAME|     PHONE|\n";
    std::cout << "+~~~~~~~~~~+~~~~~~~~~~+~~~~~~~~~~+~~~~~~~~~~+\n";
    std::system("sleep 5");
    (void)contact;
}

void    search(Contact &contact)
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