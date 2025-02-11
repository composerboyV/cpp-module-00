/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PB_src.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junkwak <junkwak@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/10 18:08:27 by junkwak           #+#    #+#             */
/*   Updated: 2025/02/11 21:45:22 by junkwak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PB.hpp"

void	Contact::more_PB_more(std::string str)
{
	if (str.length() <= 10)
		std::cout<<std::setw(10)<<str;
	if (str.length() > 10)
	{
		std::cout<<str.substr(0,9);
		std::cout<<".";
	}
}

Phonebook::Phonebook(void)
{
	index = 0;
}

void	Contact::contact_PB(void)
{
	more_PB_more(firstname_);
	std::cout<<"     |    ";
	more_PB_more(lastname_);
	std::cout<<"     | ";
	more_PB_more(nickname_);
	std::cout<<std::endl;
}

void	Phonebook::print_search(void)
{
	int	i = 0;
	int	input;
	int temp = index - 1;
	std::string line;
	if (index == 0)
		std::cout<<"Phone Book is empty." << std::endl;
	else 
	{
		std::cout << "index |    first name    |      last name    |    nick name" << std::endl;
		if (index > 8)
			temp = 8;
		while (i <= temp)
		{
			std::cout << i;
			std::cout << "     |   ";
			Phonebook::contacts[i].contact_PB();
			i++;
		}
		std::cout << "index?" << std::endl;
		while (!(std::cin >> input))
		{
			std::cin.clear();
			std::cin.ignore(10000,'\n');
			std::cout<<"check index number."<<std::endl;
			std::cout << "index?" << std::endl;
		}
		std::cin.clear();
		std::cin.ignore(10000,'\n');
		if (input / 8 < 1 && temp >= input && (input >= 0 && input <= 9))
		{
			Phonebook::contacts[input].more_PB();
		}
	}
}

void	Phonebook::index_PB(void)
{
	contacts[index % 8].add_PB();
	index++;
}