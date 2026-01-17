#include "Zombie.hpp"

int	main(void)
{
	Zombie *heapZombic(newZombie("Hobo"));
	heapZombic->announce();
	delete heapZombic;

	randomChump("Fobo");

	return (0);
}