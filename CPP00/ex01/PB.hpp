/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PB.hpp                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junkwak <junkwak@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/10 18:06:24 by junkwak           #+#    #+#             */
/*   Updated: 2025/02/11 20:22:11 by junkwak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef PB_HPP
# define PB_HPP
#include <iostream>
#include <string>
#include <stdio.h>
#include <iomanip>

class Contact {
  private :
	std::string phone_;
	std::string firstname_;
	std::string lastname_;
	std::string nickname_;
	std::string darkestsecret_;
  public :
	void	add_PB(void);
	void	contact_PB(void);
	void	more_PB(void);
	void	more_PB_more(std::string str);
};

class Phonebook
{
  private:
	Contact contacts[8];
	int index;
  public :
	Phonebook();//초기화
	void	index_PB(void);
	void	print_search(void);
	void	print_num(void);
	void	print_all(void);
};

int	record_PB(void);


#endif