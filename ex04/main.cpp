#include "Sed.hpp"

int	main(int arc, char *arv[])
{
	if (arc != 4)
		return (std::cout << "Wrong amount of arguments" << std::endl, 1);

	Sed mySed(arv[1], arv[2], arv[3]);

	mySed.execute();
	
	std::cout << arv[0] << std::endl;
	std::cout << arv[1] << std::endl;
	std::cout << arv[2] << std::endl;
	std::cout << arv[3] << std::endl;

	return (0);
}