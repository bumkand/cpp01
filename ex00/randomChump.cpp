#include "Zombie.hpp"

void randomChump( std::string name )
{
	Zombie localZombic;

	localZombic.setName(name);

	localZombic.announce();
}