#include "Zombie.hpp"

void	Zombie::setName(std::string name)
{
	_name = name;
}

void	Zombie::setIndex(int i)
{
	_index = i;
}

void	Zombie::announce() const
{
	std::cout << Zombie::_name << "[" << Zombie::_index << "] Brrrrhrrhhhh" << std::endl;
}

Zombie::Zombie()
{
	_index = 0;
}

Zombie::~Zombie()
{
	std::cout << "Zombie[" << Zombie::_index << "] " << "destructed" << std::endl;
}