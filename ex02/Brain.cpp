#include "Brain.hpp"

Brain::Brain()
{
    std::cout << "The default constructor from Brain called" << std::endl;
}

Brain::Brain(const Brain &other)
{
    std::cout << "The Copy Constructor from Brain called" << std::endl;
    *this = other;
}

Brain& Brain::operator=(const Brain &source)
{
    if (this != &source)
    {
        std::cout << "The Copy Assignement operator (Brain) has been called" << std::endl;
        for (int i = 0; i < 100 ; i++)
            this->ideas[i] = source.ideas[i];
   }
    return (*this);
}

Brain::~Brain()
{
    std::cout << "The Destructor of Brain has been called" << std::endl;
}
