/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lluzembo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/27 14:18:42 by lluzembo          #+#    #+#             */
/*   Updated: 2026/07/29 18:25:31 by lluzembo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

std::string Contact::getName()
{
    return _name;
}

std::string Contact::getNickname()
{
    return _nickname;
}

std::string Contact::getSurname()
{
    return _surname;
}

std::string Contact::getPhoneNumber()
{
    return _phonenumber;
}

std::string Contact::getDarkSecret()
{
    return _darksecret;
}

void    Contact::setName(std::string newName)
{
    _name = newName;
}

void    Contact::setNickname(std::string newNickname)
{
    _nickname = newNickname;
}

void    Contact::setSurname(std::string newSurname)
{
    _surname = newSurname;
}

void        Contact::setPhonenumber(std::string newPhonenumber)
{
    _phonenumber = newPhonenumber;
}

void Contact::setDarkSecret(std::string newDarkSecret)
{
    _darksecret = newDarkSecret;
}

