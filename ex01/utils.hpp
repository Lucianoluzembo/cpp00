/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lluzembo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/27 16:53:44 by lluzembo          #+#    #+#             */
/*   Updated: 2026/07/28 19:21:05 by lluzembo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef UTILS_HPP
# define UTILS_HPP
# include <iostream>
# include <cstdlib>
# include <cstring>
# include "contact.hpp"

int     add_contact(Contact *contact, int current);
int     search(Contact *contact, int current);
void    exit_progam_message();
#endif