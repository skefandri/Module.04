#include "Dog.hpp"

Dog::Dog()
{
    type = "Dog";
    std::cout << "The default constructor from Dog called" << std::endl;
}

std::string Dog::getType() const
{
    return type;
}

Dog::Dog(const Dog &other)
{
    std::cout << "The Copy Constructor from Dog called" << std::endl;
    *this = other;
}

Dog& Dog::operator=(const Dog &source)
{
    if (this != &source)
    {
        std::cout << "The Copy Assignement operator (Dog) has been called" << std::endl;
        type = source.type;
    }
    return (*this);
}

Dog::~Dog()
{
    std::cout << "The Destructor of Dog has been called" << std::endl;
}

void Dog::makeSound() const
{
    std::cout << "Hob HOb HOB HOOB " << std::endl;
}