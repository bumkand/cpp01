#include "Zombie.hpp"

Zombie::Zombie()
{
}

void	Zombie::setName(std::string name)
{
	_name = name;
}

Zombie::~Zombie(void)
{
	std::cout << Zombie::_name << ": died" << std::endl;
}

void Zombie::announce(void) const
{
	std::cout << Zombie::_name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}