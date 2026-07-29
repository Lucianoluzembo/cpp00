/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lluzembo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/27 14:37:48 by lluzembo          #+#    #+#             */
/*   Updated: 2026/07/29 10:38:06 by lluzembo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP
# include <string>

class Contact
{
    private:
       std::string name;
       std::string surname;
       std::string nickname;
       std::string phonenumber;
       std::string darksecret;

    public:
        std::string getName();
        std::string getNickname();
        std::string getSurname();
        std::string getPhoneNumber();
        std::string getDarkSecret();
        void        setName(std::string newName);
        void        setNickname(std::string newNickname);
        void        setSurname(std::string newSurname);
        void        setPhonenumber(std::string newPhonenumber);
        void        setDarkSecret(std::string newDarkSecret);
};

#endif