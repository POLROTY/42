/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpol <rpol@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/01 22:38:56 by rpol              #+#    #+#             */
/*   Updated: 2023/02/01 23:30:11 by rpol             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(void) {
	
	Zombie Foo("Foo");
	Foo.announce();

	Zombie *NewZombie = newZombie("NewZombie");
	NewZombie->announce();
	delete NewZombie;

	randomChump("randomChump");
	
	return (EXIT_SUCCESS);
}