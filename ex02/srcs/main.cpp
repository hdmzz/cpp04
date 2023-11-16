/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdamitzi <hdamitzi@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/05 10:28:01 by hdamitzi          #+#    #+#             */
/*   Updated: 2023/11/16 05:49:46 by hdamitzi         ###   ########.fr       */
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

void	testAnimalArray(void)
{
	std::cout <<  "-------------------------------" << std::endl
		<< "\tANIMAL ARRAY TEST" << std::endl
		<<  "-------------------------------" << std::endl << std::endl;
	Animal	* animalArray[4 + 1];
	animalArray[4] = NULL;

	std::cout << "-- Creating a kennel of " << 4 << " animals: " 
		<< 4 / 2 << " cats and "
		<< 4 - (4 / 2) << " dogs." << std::endl;

	for (int i = 0; i < 4 / 2; i++)
		animalArray[i] = new Cat();
	std::cout << std::endl;
	for (int i = 4 / 2; i < 4; i++)
		animalArray[i] = new Dog();
	
	std::cout << std::endl << "-- The cats and dogs are loud..." << std::endl;
	for (int i = 0; animalArray[i]; i++)
		animalArray[i]->makeSound();
	
	std::cout << std::endl << "-- Destroy the loud animals!"<< std::endl;
	for (int i = 0; animalArray[i]; i++)
		delete animalArray[i];
	std::cout << std::endl;
}


void testCopyCat(void)
{
	std::cout <<  "-------------------------------" << std::endl
		<< "\tCOPY CAT TEST" << std::endl
		<<  "-------------------------------" << std::endl << std::endl
		<< "-- Creating \"originalCat\" cat." << std::endl;
	Cat * originalCat = new Cat();

	std::cout << std::endl << "-- Putting ideas in originalCat's brain..." << std::endl;
	originalCat->getBrain()->setIdea(0, "I think I have a hairball...");
	originalCat->getBrain()->setIdea(1, "I need to cough the hairball up...");
	originalCat->getBrain()->setIdea(2, "Human, clean that up, will you?");

	std::cout << "originalCat idea 0: \"" << originalCat->getBrain()->getIdea(0) << "\"" << std::endl;
	std::cout << "originalCat idea 1: \"" << originalCat->getBrain()->getIdea(1) << "\"" << std::endl;
	std::cout << "originalCat idea 2: \"" << originalCat->getBrain()->getIdea(2) << "\"" << std::endl;

	std::cout << std::endl << "-- Creating a copy of \"originalCat\" cat" << std::endl;
	Cat * copyCat = new Cat(*originalCat);

	std::cout << std::endl << "-- CopyCat should have the same ideas as originalCat." << std::endl;
 	std::cout << "CopyCat idea0: \"" << copyCat->getBrain()->getIdea(0) << "\"" << std::endl;
	std::cout << "CopyCat idea1: \"" << copyCat->getBrain()->getIdea(1) << "\"" << std::endl;
	std::cout << "CopyCat idea2: \"" << copyCat->getBrain()->getIdea(2) << "\"" << std::endl;

	std::cout << std::endl << "-- Putting new ideas in originalCat's brain..." << std::endl;
	originalCat->getBrain()->setIdea(0, "Where is that mouse??");
	originalCat->getBrain()->setIdea(1, "I'm hungry.");
	originalCat->getBrain()->setIdea(2, "I shall outsmart that mouse!");

	std::cout << "originalCat idea 0: \"" << originalCat->getBrain()->getIdea(0) << "\"" << std::endl;
	std::cout << "originalCat idea 1: \"" << originalCat->getBrain()->getIdea(1) << "\"" << std::endl;
	std::cout << "originalCat idea 2: \"" << originalCat->getBrain()->getIdea(2) << "\"" << std::endl;
	
	std::cout << std::endl << "-- CopyCat's ideas should not have changed." << std::endl;
	std::cout << "CopyCat idea0: \"" << copyCat->getBrain()->getIdea(0) << "\"" << std::endl;
	std::cout << "CopyCat idea1: \"" << copyCat->getBrain()->getIdea(1) << "\"" << std::endl;
	std::cout << "CopyCat idea2: \"" << copyCat->getBrain()->getIdea(2) << "\"" << std::endl;

	std::cout << std::endl << "-- Setting CopyCat = originalCat." << std::endl;
	*copyCat = *originalCat;

	std::cout << std::endl << "-- CopyCat's ideas should have changed to originalCat's." << std::endl;
	std::cout << "CopyCat idea0: \"" << copyCat->getBrain()->getIdea(0) << "\"" << std::endl;
	std::cout << "CopyCat idea1: \"" << copyCat->getBrain()->getIdea(1) << "\"" << std::endl;
	std::cout << "CopyCat idea2: \"" << copyCat->getBrain()->getIdea(2) << "\"" << std::endl;


	std::cout << std::endl << "-- Deleting originalCat and CopyCat." << std::endl;
	delete originalCat;
	delete copyCat;
	std::cout << std::endl;
}

void testCopyDog(void)
{
	std::cout <<  "-------------------------------" << std::endl
		<< "\tCOPY DOG TEST" << std::endl
		<<  "-------------------------------" << std::endl << std::endl
		<< "-- Creating \"originalDog\" dog" << std::endl;
	Dog * originalDog = new Dog();
	std::cout << std::endl << "-- Putting ideas in originalDog's brain..." << std::endl;
	originalDog->getBrain()->setIdea(0, "Food! Food! Food!");
	originalDog->getBrain()->setIdea(1, "Human! Human! Human!");

	std::cout << "originalDog idea 0: \"" << originalDog->getBrain()->getIdea(0) << "\"" << std::endl;
	std::cout << "originalDog idea 1: \"" << originalDog->getBrain()->getIdea(1) << "\"" << std::endl;

	std::cout << std::endl << "-- Creating a copy of \"originalDog\" dog." << std::endl;
	Dog * copyDog = new Dog(*originalDog);
	
	std::cout << std::endl << "-- CopyDog should have the same ideas as originalDog." << std::endl;
	std::cout << "CopyDog idea0: \"" << copyDog->getBrain()->getIdea(0) << "\"" << std::endl;
	std::cout << "CopyDog idea1: \"" << copyDog->getBrain()->getIdea(1) << "\"" << std::endl;
	
	std::cout << std::endl << "-- Putting new ideas in originalDog's brain..." << std::endl;
	originalDog->getBrain()->setIdea(0, "Fetch! Fetch! Fetch!");
	originalDog->getBrain()->setIdea(1, "Bark! Bark! Bark!");

	std::cout << "originalDog idea 0: \"" << originalDog->getBrain()->getIdea(0) << "\"" << std::endl;
	std::cout << "originalDog idea 1: \"" << originalDog->getBrain()->getIdea(1) << "\"" << std::endl;
	
	std::cout << std::endl << "-- CopyDog's ideas should not have changed." << std::endl;
	std::cout << "CopyDog idea0: \"" << copyDog->getBrain()->getIdea(0) << "\"" << std::endl;
	std::cout << "CopyDog idea1: \"" << copyDog->getBrain()->getIdea(1) << "\"" << std::endl;

	std::cout << std::endl << "-- Setting CopyDog = originalDog." << std::endl;
	*copyDog = *originalDog;

	std::cout << std::endl << "-- CopyDog's ideas should have changed to originalDog's." << std::endl;
	std::cout << "CopyCat idea0: \"" << copyDog->getBrain()->getIdea(0) << "\"" << std::endl;
	std::cout << "CopyCat idea1: \"" << copyDog->getBrain()->getIdea(1) << "\"" << std::endl;

	std::cout << std::endl << "-- Deleting originalDog and CopyDog." << std::endl;
	delete originalDog;
	delete copyDog;
	std::cout << std::endl;
}

int	main(void)
{
	//ne devrait pas compiler si on declare un Animal
	//Animal test ;
	mandatoryTest();
	testAnimalArray();
	testCopyCat();
	testCopyDog();

	return (0);
}
