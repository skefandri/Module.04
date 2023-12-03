#include "Animal.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include <iostream>

int main()
{
    std::cout << "******************************************************" <<std::endl;
    {    
        const Animal* meta = new Animal();
        const Animal* j = new Dog();
        const Animal* i = new Cat();
        std::cout << j->getType() << " " << std::endl;
        std::cout << i->getType() << " " << std::endl;
        i->makeSound(); //will output the cat sound!
        j->makeSound();
        meta->makeSound();
        delete meta;
        delete i;
        delete j;
    }
    std::cout << "******************************************************" <<std::endl;
    {
    	const WrongAnimal* meta = new WrongAnimal();
        const WrongAnimal* x = new WrongCat();
        std::cout << x->getType() << " " << std::endl;
        x->makeSound(); //will output the cat sound!
        meta->makeSound();
        delete meta;
        delete x;
    }
    std::cout << "*********************************************" <<std::endl;
    return (0);
}
