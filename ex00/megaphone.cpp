/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lluzembo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/27 12:04:56 by lluzembo          #+#    #+#             */
/*   Updated: 2026/07/29 18:10:52 by lluzembo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(int ac, char **av)
{
    int i;
    size_t j;

    if (ac < 2)
    {
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
        return (1);
    }
    i = 1;
    while (av[i])
    {
        j = 0;
        std::string ag(av[i]);
        while (j < ag.length())
        {
            std::cout << static_cast <char>(std::toupper(ag[j]));
            j++;
        }
        i++;
    }
    std::cout << std::endl;
    return (1);
}