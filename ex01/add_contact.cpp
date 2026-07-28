#include "utils.hpp"

void save_name(Contact &contact)
{
    std::string firstname;
    size_t         i;

    std::cout << "Write the first name:\t";
    while(!std::getline(std::cin, firstname))

    i = 0;
    while(i < firstname.length())
    {
        if (std::strchr("0123456789 ", firstname[i]))
            std::cout << "Invalid name don't use number or space on name\n";
        else if (firstname[i] == 92)
                std::cout << "Ups\nInvalid name don't use \\ \n";
        i++;
    }
    contact.setName(firstname);
}

void    save_surname(Contact &contact)
{
    std::string surname;
    size_t         i;
    int             is_invalid_surname;

    is_invalid_surname = 1;
    while (is_invalid_surname)
    {
        std::cout << "Write the surname:\t";
        std::getline(std::cin, surname);
        i = 0;
        if (surname.empty())
            std::cout << "Ups\nInvalid surname\n";
        while(i < surname.length())
        {
            if (std::strchr("0123456789", surname[i]))
            {
                std::cout << "Ups\nInvalid surname don't use number in surname\n";
                break ;
            }
            else if (surname[i] == 92)
            {
                std::cout << "Ups\nInvalid surname don't use \\ \n";
                break ;
            }
            i++;
        }
        if (i >= surname.length())
            is_invalid_surname = false;
    }
    contact.setSurname(surname);

}

void    save_nickname(Contact &contact)
{
    std::string nickname;

    std::cout << "Write the nickname:\t";
    std::getline(std::cin, nickname);
    contact.setNickname(nickname);

}


void    save_number(Contact &contact)
{
    std::string phonenumber;

    std::cout << "Write the phone number:\t";
    std::getline(std::cin, phonenumber);
    contact.setPhonenumber(phonenumber);
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

            save_name(contact);
            save_surname(contact);
            save_nickname(contact);
            save_number(contact);
            std::system("clear");
            std::cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";
            std::cout << "     Congradulations new contact saved 🎉\n";
            std::cout << "       Whats do you wanna do more?\n";
            std::cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";
            std::cout << "[any key] -- Continue adding\n";
            std::cout << "[   x   ] -- Back to menu\n";
            std::cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";
            std::getline(std::cin, chose);
        }
        return (1);
}