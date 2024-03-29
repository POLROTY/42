/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpol <rpol@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/12 01:17:36 by rpol              #+#    #+#             */
/*   Updated: 2023/02/13 03:52:39 by rpol             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

int main( void ) {

const Animal* j = new Dog();
const Animal* i = new Cat();

std::cout << std::endl;

std::cout << j->getType() << std::endl;
std::cout << i->getType() << std::endl;

std::cout << std::endl;

delete j;//should not create a leak
delete i;

std::cout << std::endl;
std::cout << "------------------------------------------------------------------------------"<< std::endl;

const Animal* k = new Animal();

std::cout << std::endl;

std::cout << k->getType() << std::endl;


std::cout << std::endl;

delete k;//should not create a leak

std::cout << std::endl;
std::cout << "------------------------------------------------------------------------------"<< std::endl;

int n = 10;
Animal* animals[n];
	for(int i = 0; i < n; i++){
		if (i % 2)
			animals[i] = new Cat();
		else
			animals[i] = new Dog();
		}
	for(int i = 0; i < n; i++)
		delete animals[i];

std::cout << std::endl;
std::cout << "------------------------------------------------------------------------------"<< std::endl;

Dog* dog1 = new Dog();
dog1->setIdea( 0, "I want to be the bestest of good boys" );
const Dog* dog2 = new Dog(*dog1);
dog1->printBrainAdresse();
std::cout << dog1->getIdea( 0 ) << std::endl;
std::cout << dog1->getIdea( 1 ) << std::endl;
dog2->printBrainAdresse();
std::cout << dog2->getIdea( 0 ) << std::endl;
std::cout << dog2->getIdea( 1 ) << std::endl;

std::cout << std::endl;

delete dog1;
delete dog2;

std::cout << std::endl;

return ( EXIT_SUCCESS );
}