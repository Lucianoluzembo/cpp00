/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lluzembo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/29 12:21:53 by lluzembo          #+#    #+#             */
/*   Updated: 2026/07/29 13:34:40 by lluzembo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP
# include "utils.hpp"

class PhoneBook
{
    private:
        int current; 
        Contact contact[8];
        int tot_contacts;
    public:
        PhoneBook();
        int add_contact();
        int search_contact();

};

#endif