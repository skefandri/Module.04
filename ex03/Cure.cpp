#include "Cure.hpp"

Cure::Cure():AMateria("cure")
{
    std::cout << "Cure default constructor called" << std::endl;
}

Cure::Cure(const Cure & other) :AMateria(other.type)
{
    std::cout << "Cure Copy constructor called" << std::endl;
}

Cure& Cure::operator=(const Cure &src)
{
    if (this != &src)
        std::cout << "Cure Copy Assignement operator called" << std::endl;
    return *this;
}

AMateria* Cure::clone() const
{
    AMateria *obj = new Cure();
    return obj;
}

void Cure::use(ICharacter& target)
{
    std::cout << "* heals " << target.getName() << "’s wounds *" << std::endl;
}


Cure::~Cure()
{
    std::cout << "Cure Destructor has been called" << std::endl;
}
