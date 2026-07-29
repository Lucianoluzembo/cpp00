#include "utils.hpp"

int valid_number(std::string str)
{
    size_t  i;

    if (!(str.length() >= 1 && str.length() <= 15))
    {
        std::cout << "invalid number size use [1 - 15]" << std::endl;
        return (0);
    }
    i = 0;
    while (i < str.length())
    {
        if (!std::isdigit(str[i]))
        {
            std::cout << "Invalid char on number use just digit" << std::endl;
            return (0);
        }
        i++;
    }
    return (1);
}


int valid_input(std::string str)
{
    if (str.empty())
        return (0);
    size_t i = 0;
    while (i < str.length())
    {
        if (std::iscntrl(str[i]))
        {
            std::cout << "Invalid control caracter" << std::endl;
            return (0);
        }
        i++;
    }
    return (1);
}

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
            std::cout << "Invalid input don't use number or space in this field" << std::endl;
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
    if (!valid_input(firstname) || !valid_name(firstname))
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
    if (!valid_input(surname) || !valid_name(surname))
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
    if (!valid_input(nickname))
        return(save_nickname(contact));
    contact.setNickname(nickname);
    return (1);
}


int    save_number(Contact &contact)
{
    std::string phonenumber;

    std::cout << "Write the phone number:\t";
    if (!std::getline(std::cin, phonenumber))
        return (0);
    if (!valid_input(phonenumber))
        return (exit_progam_message(), 0);
    if (!valid_number(phonenumber))
        return (save_number(contact));
    contact.setPhonenumber(phonenumber);
    return (1);
}

int    save_dark_secret(Contact &contact)
{
    std::string darksecret;

    std::cout << "Write the dark secret:\t";
    if (!std::getline(std::cin, darksecret))
        return (0);
    if (!valid_input(darksecret))
        return (exit_progam_message(), 0);
    contact.setDarkSecret(darksecret);
    return (1);
}
int    PhoneBook::addContact()
{
      
        std::system("clear");
        std::cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << std::endl;
        std::cout << "[   ADD  ] -- Create a new contact" << std::endl;
        std::cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << std::endl;
        if (!save_name(contact[_current % 8]))
            return (0);
        else if (!save_surname(contact[_current % 8]))
            return (0);
        else if (!save_nickname(contact[_current % 8]))
            return (0);
        else if (!save_number(contact[_current % 8]))
            return (0);
        else if (!save_dark_secret(contact[_current % 8]))
            return (0);
        _current++;
        return (1);
}
