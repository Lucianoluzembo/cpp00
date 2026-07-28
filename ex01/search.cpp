/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   search.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lluzembo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/27 19:57:25 by lluzembo          #+#    #+#             */
/*   Updated: 2026/07/28 15:45:55 by lluzembo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "utils.hpp"

void    see_specific_contact(int id)
{
    std::cout << "ver contacto " << id << std::endl;
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

int    show_all_contacts(Contact &contact)
{
    std::string name;
    std::string surname;
    std::string nickname;
    std::string phone;
    std::string op;
    size_t list_size;

    name = contact.getName();
    surname = contact.getSurname();
    nickname = contact.getNickname();
    phone = contact.getPhoneNumber();
    list_size = 3;
    std::system("clear");
    std::cout << "+~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~+\n";
    std::cout << "|   Phone Book mr bug 1.0   My contacts     |\n";
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
        std::cout << "\n+~~~~~~~~~~+~~~~~~~~~~+~~~~~~~~~~+~~~~~~~~~~+\n";
        i++;
    }

    while (true)
    {
        std::cout << "[1 - 8] to see specify contact\n";
        std::cout << "[  x  ] back to search menu \n";
        if(!std::getline(std::cin, op))
            return (0);
        if (op.length() == 1 && op[0] >= '1' && op[0] <= '8')
            see_specific_contact(op[0] - 48);
        else if (op.length() == 1 && op[0] == 'x')
            break ;
        else
            std::cout << "Invalid option...\n";
    }
    return (1);
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

int    search(Contact &contact)
{
    std::string op;

    while (true)
    {
        std::system("clear");
        std::cout << "+~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~+\n";
        std::cout << "|   [ SEARCH ] -- Find yours contacts |\n";
        std::cout << "+~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~+\n";
        std::cout << " [0] See all contacts\n";
        std::cout << " [1] Search some contact\n";
        std::cout << " [x] back to main menu\n";
        if(!std::getline(std::cin, op))
            return (0);
        if (op == "0")
        {
            if (!show_all_contacts(contact))
                    return (0);
        }
        else if (op == "1")
            find_some_contact(contact);
        else if (op == "x")
            break ;
    }
    return (1);
}