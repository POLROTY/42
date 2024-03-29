/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpol <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/03 02:22:53 by rpol              #+#    #+#             */
/*   Updated: 2023/02/03 16:38:48 by rpol             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl( void ) {

	return;
}

Harl::~Harl( void ) {

	return;
}
		
void	Harl::complain( std::string level ) {
	
	void (Harl::*pointer_to_function[4])(void) = {
		&Harl::debug,
		&Harl::info,
		&Harl::warning,
		&Harl::error};
	
	std::string lvl[4] = {
		"DEBUG",
		"INFO",
		"WARNING",
		"ERROR"};
	
	int i = 0;
	while (i < 4)
	{
		if (lvl[i] == level)
			return (this->*pointer_to_function[i])();
		i++;
	}
	
	std::cout << "Harl doesn't have a " << level << " level of complaint!" << std::endl;

	return;
}

void Harl::debug( void ) {
	
	std::cout << "*DEBUG*" << std::endl;
	std::cout << "ChatGPT is slow. It's taking forever to process my request!" << std::endl;
}

void Harl::info( void ) {
	
	std::cout << "*INFO*" << std::endl;
	std::cout << "ChatGPT is inaccurate. It's not giving me the information I need." << std::endl;
}

void Harl::warning( void ) {
	
	std::cout << "*WARNING*" << std::endl;
	std::cout << "ChatGPT is unreliable. I can't trust the answers it gives me." << std::endl;
}

void Harl::error( void ) {
	
	std::cout << "*ERROR*" << std::endl;
	std::cout << "ChatGPT is completely broken. It's not working at all!" << std::endl;
}
