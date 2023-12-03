#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include <iostream>

int main()
{
    const Animal* j = new Dog();
    const Animal* i = new Cat();

    std::cout << "******************************************************" <<std::endl;

    for (int a = 0; a < 5; a++)
        j->makeSound();

    std::cout << "******************************************************" <<std::endl;
    for (int k = 0; k < 5; k++)
        i->makeSound();

    std::cout << "******************************************************" <<std::endl;
    delete j;//should not create a leak
    delete i;
    return 0;
}