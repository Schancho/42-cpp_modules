#include "ClapTrap.hpp"

int main()
{
    ClapTrap c;
    ClapTrap d("warrior");
    c = d;
    c.attack("someone");
    c.takeDamage(30);
    c.beRepaired(50);
    ClapTrap g(c);
    g.attack("someone");
    g.takeDamage(30);
    g.beRepaired(50);
    return 0;
}