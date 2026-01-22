#include "Zombie.hpp"

Zombie* zombieHorde(int N, std::string name)
{
	Zombie	*newZombic;

	if (N < 1)
		return (NULL);
	newZombic = new Zombie[N];
	for (int i = 0; i < N; i++)
	{
		newZombic[i].setName(name);
		newZombic[i].setIndex(i);
		newZombic[i].announce();
	}
	return (newZombic);
}