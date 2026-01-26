#include "Harl.hpp"

int	main(int arc, char *arv[])
{
	Harl MyHarl;

	if (arc != 2)
	{
		std::cerr << "Error: argument is missing" << std::endl;
		return (1);
	}

	std::string str = arv[1];

	MyHarl.complain(str);

	return (0);
}