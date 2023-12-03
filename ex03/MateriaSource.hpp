#ifndef MATERIASOURCE_HPP
#define MATERIASOURCE_HPP

#include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource
{
    private:
        AMateria *inv[4];
    public:
        MateriaSource();
        MateriaSource(const MateriaSource& );
        void learnMateria(AMateria*);
        AMateria* createMateria(std::string const & type);
        MateriaSource& operator=(const MateriaSource &);
        ~MateriaSource();
};

#endif