#include "ClapTrap.hpp"

int main()
{
    ClapTrap c;
    // c.setHitPoint(0);
    // c.setEnergyPoints(10);
    // c.setAttackDamage(17);
    
    ClapTrap a = c;
   // a = c;
    //std::cout << a.getAttackDamage() << std::endl;
    // c.setAttackDamage(56);
   // std::cout << a.getAttackDamage() << std::endl;
    c.attack("someone");
    a.attack("someone");
    return 0;
}