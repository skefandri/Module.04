#include "AMateria.hpp"
#include "ICharacter.hpp"
#include "Ice.hpp"
#include "Cure.hpp"
#include "MateriaSource.hpp"
#include "Character.hpp"

int main1()
{
    IMateriaSource* src = new MateriaSource();
    src->learnMateria(new Ice());
    src->learnMateria(new Cure());
    ICharacter* me = new Character("me");
    AMateria* tmp;
    tmp = src->createMateria("ice");
    me->equip(tmp);
    tmp = src->createMateria("cure");
    tmp = src->createMateria("cure");
    tmp = src->createMateria("cure");
    tmp = src->createMateria("cure");
    tmp = src->createMateria("cure");
    tmp = src->createMateria("cure");
    me->equip(tmp);
    ICharacter* bob = new Character("bob");
    me->use(0, *bob);
    me->use(1, *bob);
    Character obj("me");
    // tmp = src->createMateria("ice");
    obj.equip(tmp);
    obj.equip(tmp);
    obj.equip(tmp);
    obj.unequip(0);
    obj.use(0, *bob);
    obj.equip(tmp);
    obj.unequip(1);
    obj.use(0, *bob);
    obj.use(1, *bob);
    obj.equip(tmp);
    obj.equip(tmp);
    obj.equip(tmp);
    obj.equip(tmp);
    delete bob;
    delete me;
    delete src;
    return 0;
}


int main()
{
    main1();
    system("leaks ex03");
}