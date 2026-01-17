#include "Zombie.hpp"

void randomChump( std::string name )
{
	Zombie localZombic(name);

	localZombic.announce();
}