#include "utils.hpp"

void save_name()
{
    std::string firstname;
    int         i;

    std::cout << "Write the first name:\t";
    std::cin >> firstname;
    
    i = 0;
    while(firstname[i])
    {
        if (std::strchr("0123456789", firstname[i]))
            std::cout << "Ups\nInvalid name don't use number in name\n";
        else if (firstname[i] == 92)
             std::cout << "Ups\nInvalid name don't use \\ \n";
        i++;
    }
}

void    save_surname()
{
    std::string surname;
    int         i;

    std::cout << "Write the surname:\t";
    std::cin >> surname;
    
    i = 0;
    while(surname[i])
    {
        if (std::strchr("0123456789", surname[i]))
            std::cout << "Ups\nInvalid surname don't use number in surname\n";
        else if (surname[i] == 92)
             std::cout << "Ups\nInvalid surname don't use \\ \n";
        i++;
    }
}

void    save_nickname()
{
    std::string nickname;

    Contact contact;
    std::cout << "Write the nickname:\t";
    std::cin >> nickname;
    
    contact.setName(nickname);
}

void    add_contact()
{
        std::string surname;
        std::string nickname;
        std::string phonenumber;
    
        int chose;
        
        chose= 1;
        while (chose)
        {
            std::system("clear");
            std::cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";
            std::cout << "[   ADD  ] -- Create a new contact\n";
            std::cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";

            save_name();
            save_surname();
            save_nickname();

        }
}