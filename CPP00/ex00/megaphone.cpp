/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junkwak <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/21 20:55:12 by junkwak           #+#    #+#             */
/*   Updated: 2025/01/31 16:20:54 by junkwak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int	main(int argc, char **argv)
{
	std::string str;
	int	j = 1;
	if (argc < 2)
	{
		printf("* LOUD AND UNBEARABLE FEEDBACK NOISE *\n");
		return (0);
	}
	while (argv[j])
	{
		str = argv[j];
		for (int i = 0; str[i]; i++)
		{
			if (str[i] >= 'a' && str[i] <= 'z')
				str[i] -= 32;
		}
		std::cout << str;
		j++;
	}
	std::cout << "\n";
	return (0);
}

