#include "Zombie.hpp"

int main()
{
    Zombie *Zombies = newZombieHorde(10, "Zombie");
    for (int i = 0; i < 10; i++)
        Zombies[i].announce();
    delete[] Zombies;
    return (0);
}