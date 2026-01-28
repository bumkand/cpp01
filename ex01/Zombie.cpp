#include "Zombie.hpp"

void	Zombie::setName(std::string name)
{
	_name = name;
}

std::string	Zombie::getName(void) const
{
	return (_name);
}

void	Zombie::setIndex(int i)
{
	_index = i;
}

int	Zombie::getIndex(void) const
{
	return (_index);
}

void	Zombie::announce() const
{
	std::cout << getName() << "[" << getIndex() << "] Brrrrhrrhhhh" << std::endl;
}

Zombie::Zombie()
{
	_index = 0;
}

Zombie::~Zombie()
{
	//std::cout << "Zombie[" << Zombie::_index << "] " << "destructed" << std::endl;
}