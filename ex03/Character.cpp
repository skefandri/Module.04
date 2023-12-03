#include "Character.hpp"
#include "AMateria.hpp"

Character::Character()
{
    for (int i = 0; i < 4; i++)
        inventory[i] = NULL;
    std::cout << "Character default Constructor has been called" << std::endl;
}

Character::Character(std::string nam)
{
    std::cout << "Character Parameterized Constructor has been called" << std::endl;
    name = nam;
    for (int i = 0; i < 4; i++)
        inventory[i] = NULL;
}


Character::Character(const Character &other) :ICharacter()
{
    std::cout << "Character Copy Constructor has been called" << std::endl;
    *this = other;
}

Character& Character::operator=(const Character &src)
{
    if (this != &src)
    {
        for (int i = 0; i < 4; i++)
            this->inventory[i] = src.inventory[i];
        this->name = src.name;
        std::cout << "Character Copy Assignement Operator has been called" << std::endl;
    }
    return *this;
}

Character::~Character()
{
    std::cout << "Character Destructor has been called" << std::endl;
}

std::string const &Character::getName() const
{
    return name;
}

void Character::equip(AMateria* m)
{
    if (!m)
        return ;
    for (int i = 0; i < 4; i++)
    {
        if (!this->inventory[i])
        {
            this->inventory[i] = m->clone();
            break ;
        }
    }
}

void Character::unequip(int idx)
{
    if (idx >= 0 && idx < 4)
    {
        //we must use save by linked list and free on destructor
        this->inventory[idx] = NULL;
    }
}

void Character::use(int idx, ICharacter& target)
{
    if (idx >= 0 && idx < 4 && inventory[idx] != NULL)
        this->inventory[idx]->use(target);
}