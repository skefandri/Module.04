#ifndef ICE_HPP
#define ICE_HPP

#include "AMateria.hpp"
#include <iostream>

class  Ice: public AMateria
{
    public:
        Ice();
        Ice(const Ice &);
        Ice& operator=(const Ice &);
        ~Ice();
        AMateria* clone() const;
        void use(ICharacter& target);
};


#endif