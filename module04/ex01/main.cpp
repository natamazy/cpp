#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"

int main(void)
{
	{
		const Animal *meta = new Animal("Monkey");
		const Animal *dog = new Dog();
		const Animal *cat = new Cat();
		const WrongAnimal *wcat = new WrongCat();
		std::cout << meta->getType() << " " << std::endl;
		std::cout << dog->getType() << " " << std::endl;
		std::cout << cat->getType() << " " << std::endl;
		std::cout << wcat->getType() << " " << std::endl;
		cat->makeSound();
		dog->makeSound();
		wcat->makeSound();
		meta->makeSound();
		delete meta;
		delete dog;
		delete cat;
		delete wcat;
	}

	{
		const Animal *meta = new Animal("Monkey");
		meta->makeSound();
		delete meta;
		const Animal *alpa = new Animal();
		alpa->makeSound();
		delete alpa;
		const Animal *dog = new Dog();
		dog->makeSound();
		delete dog;
		const Animal *cat = new Cat();
		cat->makeSound();
		delete cat;
	}

	return (0);
}