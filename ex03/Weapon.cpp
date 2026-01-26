#include "Weapon.hpp"

std::string	Weapon::getType() const
{
	return (_type);
}

void Weapon::setType(std::string type)
{
	_type = type;
}

Weapon::Weapon(std::string str)
{
	setType(str);
}

Weapon::~Weapon(void)
{
	//std::cout << "Weapon destructed" << std::endl;
}
