#include "Cat.hpp"

Cat::Cat()
{
    brain = new Brain();
    type = "Cat";
    std::cout << "The default constructor from Cat called" << std::endl;
}

std::string Cat::getType() const
{
    return type;
}

Cat::Cat(const Cat &other)
{
    brain = new Brain();
    std::cout << "The Copy Constructor from Cat called" << std::endl;
    *this = other;
}

Cat& Cat::operator=(const Cat &source)
{
    if (this != &source)
    {
        std::cout << "The Copy Assignement operator (Cat) has been called" << std::endl;
        type = source.type;
        *this->brain = *source.brain;
    }
    return (*this);
}

Cat::~Cat()
{
    delete brain; 
    std::cout << "The Destructor of Cat has been called" << std::endl;
}

void Cat::makeSound() const
{
    std::cout << "MEO MEO MEO MEO " << std::endl;
}