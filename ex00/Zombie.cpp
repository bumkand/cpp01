#include "Zombie.hpp"

Zombie::Zombie()
{
}

Zombie::~Zombie(void)
{
	//std::cout << Zombie::_name << ": died" << std::endl;
}

void	Zombie::setName(std::string name)
{
	_name = name;
}

std::string	Zombie::getName(void) const
{
	return (_name);
}

void Zombie::announce(void) const
{
	std::cout << getName() << ": BraiiiiiiinnnzzzZ..." << std::endl;
}