#include "Animal.hpp"

Animal::Animal():type("Animal")
{
    std::cout << "The default constructor from Animal called" << std::endl;
}

std::string    Animal::getType() const
{
    return type;
}

Animal::Animal(const Animal &other)
{
    std::cout << "The Copy Constructor from Animal called" << std::endl;
    *this = other;
}

Animal& Animal::operator=(const Animal &source)
{
    if (this != &source)
    {
        std::cout << "The Copy Assignement operator (Animal) has been called" << std::endl;
        type = source.type;
    }
    return (*this);
}

Animal::~Animal()
{
    std::cout << "The Destructor of Animal has been called" << std::endl;
}

void Animal::makeSound() const
{
    std::cout << "Animal have multiple sounds " << std::endl;
}
