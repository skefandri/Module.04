#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>

class Animal
{
    protected:
        std::string type;
    public:
        Animal();
        Animal(const Animal &other);
        Animal& operator=(const Animal &source);
        virtual ~Animal();
        std::string    getType() const;
        virtual void makeSound() const = 0;
        
};

#endif