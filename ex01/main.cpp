#include "Zombie.hpp"

int	main(void)
{
	int		N = 6;
	Zombie	*newZombic;

	newZombic = zombieHorde(N, "HoBo");

	//for (int i = 0; i < N; i++)
	//{
	//	newZombic[i].announce();
	//}


	delete[] newZombic;
	return (0);
}
