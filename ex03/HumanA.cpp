#include "HumanA.hpp"

HumanA::HumanA(std::string str, Weapon &weapon) :
	_name (str),
	_weapon (weapon)

{
}

HumanA::~HumanA(void)
{
	//std::cout << "HumanA destructed" << std::endl;
}

std::string HumanA::getName(void) const
{
	return (_name);
}

void HumanA::setName(std::string name)
{
	_name = name;
}

std::string HumanA::getWeapon(void) const
{
	return (_weapon.getType());
}

void HumanA::setWeapon(std::string weapon)
{
	_weapon.setType(weapon);
}

void HumanA::attack()
{
	std::cout << _name << " attacks with their " << _weapon.getType() << std::endl;
}
