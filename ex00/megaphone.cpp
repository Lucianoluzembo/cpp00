/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lluzembo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/07 12:09:12 by lluzembo          #+#    #+#             */
/*   Updated: 2026/04/07 13:02:45 by lluzembo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(int ac, char **av)
{
    int i;
    int j;

    if (ac == 1)
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
    else
    {
        i = 1;
        while (av[i])
        {
            j = 0;
            while (av[i][j])
            {
                av[i][j] = toupper(av[i][j]);
                j++;
            }
            std::cout << av[i];
            i++;
        }
        std::cout << std::endl;
    }
}
