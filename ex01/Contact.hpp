/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lluzembo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/27 14:37:48 by lluzembo          #+#    #+#             */
/*   Updated: 2026/07/29 18:22:13 by lluzembo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP
# include <string>

class Contact
{
    private:
       std::string _name;
       std::string _surname;
       std::string _nickname;
       std::string _phonenumber;
       std::string _darksecret;

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