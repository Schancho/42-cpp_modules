#include "Zombie.hpp"

Zombie *newZombieHorde(int N, std::string name)
{
    Zombie *zombies;
    zombies = new Zombie[N];
    std::string aName;
    while (N--)
    {
        aName =name + "_" + std::to_string(N);
        zombies[N].setName(aName);
    }
    return zombies;
}