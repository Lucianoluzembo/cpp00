/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lluzembo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/27 16:53:44 by lluzembo          #+#    #+#             */
/*   Updated: 2026/07/29 20:10:28 by lluzembo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef UTILS_HPP
# define UTILS_HPP
# include <iostream>
# include <cstdlib>
# include <cstring>
# include "Contact.hpp"
# include "PhoneBook.hpp"

int     addContact(Contact *contact, int current);
int     search(Contact *contact, int current);
void    exit_progam_message();
#endif