#include "WrongCat.hpp"

WrongCat::WrongCat()
{
    type = "WrongCat";
    std::cout << "The default constructor from WrongCat called" << std::endl;
}

std::string WrongCat::getType() const
{
    return type;
}

WrongCat::WrongCat(const WrongCat &other)
{
    std::cout << "The Copy Constructor from WrongCat called" << std::endl;
    *this = other;
}

WrongCat& WrongCat::operator=(const WrongCat &source)
{
    if (this != &source)
    {
        std::cout << "The Copy Assignement operator (WrongCat) has been called" << std::endl;
        type = source.type;
    }
    return (*this);
}

WrongCat::~WrongCat()
{
    std::cout << "The Destructor of WrongCat has been called" << std::endl;
}

void WrongCat::makeSound() const
{
    std::cout << "MEO MEO MEO MEO " << std::endl;
}