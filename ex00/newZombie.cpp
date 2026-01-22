#include "Zombie.hpp"

Zombie* newZombie( std::string name )
{
	Zombie *Zombic;
	Zombic = new Zombie();
	Zombic->setName(name);
	return (Zombic);
}