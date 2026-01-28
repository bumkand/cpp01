#include "Sed.hpp"

int	main(int arc, char *arv[])
{
	if (arc != 4)
	{
		std::cerr << "Error: wrong amount of arguments" << std::endl;
		return (1);
	}

	Sed mySed(arv[1], arv[2], arv[3]);

	if (mySed.execute() == 1)
		return (1);

	return (0);
}
