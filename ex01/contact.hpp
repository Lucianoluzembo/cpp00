/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lluzembo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/27 14:37:48 by lluzembo          #+#    #+#             */
/*   Updated: 2026/07/28 11:12:33 by lluzembo         ###   ########.fr       */
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

    public:
        std::string getName();
        std::string getNickname();
        std::string getSurname();
        std::string getPhoneNumber();
        void        setName(std::string newName);
        void        setNickname(std::string newNickname);
        void        setSurname(std::string newSurname);
        void        setPhonenumber(std::string newPhonenumber);
};

#endif