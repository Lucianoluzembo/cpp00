/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lluzembo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/27 14:37:48 by lluzembo          #+#    #+#             */
/*   Updated: 2026/07/27 17:47:32 by lluzembo         ###   ########.fr       */
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
        void        setName(std::string newName);
        void        setNickname(std::string newNickname);
        void        setSurname(std::string newSurname);
        void        setPhonenumber(std::string newPhonenumber);
};

#endif