#include "MateriaSource.hpp"

MateriaSource::MateriaSource()
{
    for (int i = 0; i < 4; i++)
        inv[i] = NULL;
    std::cout << "The default constructor Of MateriaSource  has been called" << std::endl;
}

MateriaSource::MateriaSource(const MateriaSource& other)
{
    std::cout << "The Copy constructor Of MateriaSource has been called" << std::endl;
    *this = other;
}

MateriaSource& MateriaSource::operator=(const MateriaSource &src)
{
    if (this != &src)
    {
        for (int i = 0; i < 4 && inv[i]; i++)
            this->inv[i] = src.inv[i]->clone();
        std::cout << "The Copy Assignement operator Of MateriaSource has been called" << std::endl;
    }
    return *this;
}

MateriaSource::~MateriaSource()
{
    std::cout<< "Destuctor of MateriaSource has been called" << std::endl;
}


void MateriaSource::learnMateria(AMateria* m)
{  
    if (!m)
        return ;
    for (int i = 0; i < 4 ; i++)
    {
        if (!this->inv[i])
        {
            this->inv[i] = m;
            break ;
        }
    };
}

AMateria* MateriaSource::createMateria(std::string const & type)
{
    for (int i = 0; i < 4; i++)
    {
        if (inv[i] && inv[i]->getType() == type)
        {
            //we must use save by linked list and free on destructor
            return (inv[i]->clone());
        }
    }
    return NULL;
}

