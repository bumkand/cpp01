#include "HumanB.hpp"

HumanB::HumanB(std::string str) :
	_name(str),
	_weapon(NULL)
{
}

HumanB::~HumanB(void)
{
	//std::cout << "HumanB destructed" << std::endl;
}

std::string HumanB::getName(void) const
{
	return (_name);
}

void HumanB::setName(std::string name)
{
	_name = name;
}

std::string HumanB::getWeapon(void) const
{
	if (_weapon != NULL)
		return (_weapon->getType());
	else
		return ("");
}

void HumanB::setWeapon(Weapon &weapon)
{
	_weapon = &weapon;
}

void HumanB::attack()
{
	if (!_weapon)
	{
		std::cout << _name << " don't have weapon" << std::endl;
		return;
	}
	std::cout << _name << " attacks with their " << _weapon->getType() << std::endl;
}
