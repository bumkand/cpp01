#ifndef HUMANB_HPP
#define HUMANB_HPP

#include "Weapon.hpp"
#include <iostream>

class HumanB
{
	private:
	std::string	_name;
	Weapon	*_weapon;

	public:
	HumanB(std::string str);
	~HumanB(void);

	void setWeapon(Weapon &weapon);
	std::string getWeapon(void) const;

	void setName(std::string name);
	std::string getName(void) const;

	void attack();


};

#endif