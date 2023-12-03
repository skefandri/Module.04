#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal():type("WrongAnimal")
{
    std::cout << "The default constructor from WrongAnimal called" << std::endl;
}

std::string    WrongAnimal::getType() const
{
    return type;
}

WrongAnimal::WrongAnimal(const WrongAnimal &other)
{
    std::cout << "The Copy Constructor from WrongAnimal called" << std::endl;
    *this = other;
}

WrongAnimal& WrongAnimal::operator=(const WrongAnimal &source)
{
    if (this != &source)
    {
        std::cout << "The Copy Assignement operator (WrongAnimal) has been called" << std::endl;
        type = source.type;
    }
    return (*this);
}

WrongAnimal::~WrongAnimal()
{
    std::cout << "The Destructor of WrongAnimal has been called" << std::endl;
}

void WrongAnimal::makeSound() const
{
    std::cout << "WrongAnimal have multiple sounds " << std::endl;
}
