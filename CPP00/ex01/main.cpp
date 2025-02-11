/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junkwak <junkwak@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/10 12:16:14 by junkwak           #+#    #+#             */
/*   Updated: 2025/02/11 21:27:12 by junkwak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
/*
너비 10자 | 파이프문자로 구분(|) |오른쪽 정렬 열보다 길면 자르기
가능한 마지막 문자를 .으로 표시

전화번호부가 비어있음.
추가 검색 종료 명령어 입력하도록 함.

접근법
입력되는값 받기(총 4개 , ADD,SEARCH, EXIT, 클래스값 출력하는 숫자)
*/
#include "PB.hpp"
#include <iostream>
#include <string>

int main() 
{
	Phonebook book;
	while (1) {
	std::string a;
	std::string command;
	std::getline(std::cin, a);
	if (std::cin.eof())
	{
		std::cout << "EOF ERROR"<<std::endl;
		break ;
	}
	if (a == "EXIT")
	{
		return (1);
	}
	else if (a == "ADD")
	{
		book.index_PB();
	}
	else if (a == "SEARCH")
	{
		book.print_search();
	}
	else
		std::cout<<"please check command" << std::endl;
	}
	return 0;
}