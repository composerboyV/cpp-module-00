/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact_PB.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junkwak <junkwak@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/10 18:08:27 by junkwak           #+#    #+#             */
/*   Updated: 2025/02/11 21:05:40 by junkwak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PB.hpp"

void	Contact::add_PB(void)
{
	std::cout << "first name is..." << std::endl;
	getline(std::cin, firstname_);
	std::cout << "last name is..." << std::endl;
	getline(std::cin, lastname_);
	std::cout << "nickname is..." << std::endl;
	getline(std::cin, nickname_);
	std::cout << "phone number is..." << std::endl;
	getline(std::cin, phone_);
	std::cout << "darkest secret_ number is..." << std::endl;
	getline(std::cin, darkestsecret_);
}

void	Contact::more_PB(void)
{
	std::cout<<"frist name :";
	std::cout<<firstname_<<std::endl;	
	std::cout<<"last name :";
	std::cout<<lastname_<<std::endl;
	std::cout<<"nickname : ";
	std::cout<<nickname_<<std::endl;
	std::cout<<"phon number : ";
	std::cout<<phone_<<std::endl;
	std::cout<<"darkest secret :";
	std::cout<<darkestsecret_<<std::endl;
}