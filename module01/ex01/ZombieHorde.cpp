#include "Zombie.hpp"

Zombie *newZombieHorde(int N, std::string name)
{
    Zombie *zombies;
    zombies = new Zombie[N];
    while (N--)
        zombies[N].setName(name);
    return zombies;
}