
#include "Zombie.hpp"


int main()
{
	Zombie *z = newZombie("HI");
	z->announce() ;
	delete z;
	randomChump("HI");
	return 0;
}
