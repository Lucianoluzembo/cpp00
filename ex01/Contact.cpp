/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lluzembo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/27 14:18:42 by lluzembo          #+#    #+#             */
/*   Updated: 2026/07/29 12:59:23 by lluzembo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

std::string Contact::getName()
{
    return name;
}

std::string Contact::getNickname()
{
    return nickname;
}

std::string Contact::getSurname()
{
    return surname;
}

std::string Contact::getPhoneNumber()
{
    return phonenumber;
}

void    Contact::setName(std::string newName)
{
    name = newName;
}

void    Contact::setNickname(std::string newNickname)
{
    nickname = newNickname;
}

void    Contact::setSurname(std::string newSurname)
{
    surname = newSurname;
}

void        Contact::setPhonenumber(std::string newPhonenumber)
{
    phonenumber = newPhonenumber;
}

std::string Contact::getDarkSecret()
{
    return darksecret;
}

void Contact::setDarkSecret(std::string newDarkSecret)
{
    darksecret = newDarkSecret;
}

