/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdamitzi <hdamitzi@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/05 10:28:01 by hdamitzi          #+#    #+#             */
/*   Updated: 2023/11/09 01:54:51 by hdamitzi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

void	mandatoryTest()
{
	int size = 4;

	Animal* animals[size + 1];
	animals[size] = NULL;

	for(int i = 0; i < size/2; i++)
		animals[i] = new Dog();

	std::cout << std::endl;

	for(int i = size/2; i < size; i++)
		animals[i] = new Cat();

	std::cout << std::endl;

	for (int i = 0; i < size; i++)
		animals[i]->makeSound();

	std::cout << std::endl;

	for(int i = 0; i < size; i++)
		delete animals[i];
}

int	main(void)
{
	mandatoryTest();

	return (0);
}
