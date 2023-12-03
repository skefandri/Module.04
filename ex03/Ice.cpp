#include "Ice.hpp"

Ice::Ice(): AMateria("ice")
{
    std::cout << "Ice default constructor called" << std::endl;
}

Ice::Ice(const Ice & other) :AMateria(other.type)
{
    std::cout << "Ice Copy constructor called" << std::endl;
}

Ice& Ice::operator=(const Ice &src)
{
    if (this != &src)
    {
        std::cout << "Ice Copy Assignement operator called" << std::endl;
    }
    return *this;
}

AMateria* Ice::clone() const
{
    AMateria *obj = new Ice();
    return obj;
}

void Ice::use(ICharacter& target)
{
    std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}

Ice::~Ice()
{
    std::cout << "Ice Destructor has been called" << std::endl;
}
