#include "AMateria.hpp"

AMateria::AMateria(std::string const & type): type(type)
{
    std::cout << "AMateria Parameterized Constructor has been called" << std::endl;
}

std::string const & AMateria::getType() const
{
    return type;
}

void AMateria::use(ICharacter& target)
{
    (void)target;
    return ;
}

AMateria::~AMateria()
{
    std::cout << "AMateria Destructor has been called" << std::endl;
}