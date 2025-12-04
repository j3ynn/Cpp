/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbellucc <jbellucc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/27 14:08:38 by jbellucc          #+#    #+#             */
/*   Updated: 2025/12/04 18:33:24 by jbellucc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cctype>
//#include <string>

void	end(char *str)
{
	int j = 0;
	char c;

	while (str[j])
	{
		c = std::toupper(str[j]);
		std::cout << c;
		j ++;
	}
}

int main(int ac, char **av)
{
    int i = 1;
    
    if (ac == 1)
    {
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *\n";
        return (0);
    }
    while (av[i])
	{
		end(av[i]);
		i ++;
	}
    std::cout << "\n";
    return (0);
}