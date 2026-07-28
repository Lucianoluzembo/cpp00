#include "utils.hpp"

int valid_name(std::string str)
{
    size_t i;

    i = 0;
    if (str.empty())
    {
        std::cout << "empty input is invalid";
        return (0);
    }
    while(i < str.length())
    {
        if (std::strchr("0123456789 ", str[i]))
        {
            std::cout << "Invalid input don't use number or space in this field\n";
            return (0);
        }
        else if (str[i] == 92)
        {
            std::cout << "Ups\nInvalid input don't use \\ in this field\n", 0;
            return (0);
        }
        i++;
    }
    return (1);
}

int save_name(Contact &contact)
{
    std::string firstname;

    std::cout << "Write the first name:\t";
    if(!std::getline(std::cin, firstname))
        return (exit_progam_message(), 0);
    if (!valid_name(firstname))
        return(save_name(contact));
    contact.setName(firstname);
    return (1);
}

int    save_surname(Contact &contact)
{
    std::string surname;

    std::cout << "Write the surname:\t";
    if (!std::getline(std::cin, surname))
        return (exit_progam_message(), 0);
    if (!valid_name(surname))
        return (save_surname(contact));
    contact.setSurname(surname);
    return (1);
}

int    save_nickname(Contact &contact)
{
    std::string nickname;

    std::cout << "Write the nickname:\t";
    if (!std::getline(std::cin, nickname))
        return (exit_progam_message(), 0);
    if (nickname.empty())
        return(save_nickname(contact));
    contact.setNickname(nickname);
    return (1);
}


int    save_number(Contact &contact)
{
    std::string phonenumber;

    std::cout << "Write the phone number:\t";
    if (std::getline(std::cin, phonenumber))
        return (0);
    contact.setPhonenumber(phonenumber);
    return (1);
}
int    add_contact(Contact &contact)
{
        std::string surname;
        std::string nickname;
        std::string phonenumber;
        std::string chose;
        
        chose= "1";
        while (chose != "x")
        {
            std::system("clear");
            std::cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";
            std::cout << "[   ADD  ] -- Create a new contact\n";
            std::cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";
            if (!save_name(contact))
                return (0);
            else if (!save_surname(contact))
                return (0);
            else if (!save_nickname(contact))
                return (0);
            else if (!save_number(contact))
                return (0);
            std::system("clear");
            std::cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";
            std::cout << "     Congradulations new contact saved 🎉\n";
            std::cout << "       Whats do you wanna do more?\n";
            std::cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";
            std::cout << "[any key] -- Continue adding\n";
            std::cout << "[   x   ] -- Back to menu\n";
            std::cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";
            if (!std::getline(std::cin, chose))
                return (0);
        }
        return (1);
}
