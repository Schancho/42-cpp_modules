
#include "Zombie.hpp"


int main()
{
	Zombie *z = newZombie("HI");

	std::cout << z->getName() << std::endl;

	delete z;

	//randomChump("HI");
	return 0;
}
