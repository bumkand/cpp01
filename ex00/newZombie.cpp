#include "Zombie.hpp"

Zombie* newZombie( std::string name )
{
	Zombie *Zombic;
	Zombic = new Zombie(name);
	return (Zombic);
}