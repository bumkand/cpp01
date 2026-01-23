#ifndef HUMANA_HPP
#define HUMANA_HPP

#include "Weapon.hpp"
#include <iostream>

class HumanA
{
	private:
	std::string	_name;
	Weapon		&_weapon;

	public:
	HumanA(std::string str, Weapon &weapon);
	~HumanA(void);

	void setWeapon(std::string weapon);
	std::string getWeapon(void) const;

	void setName(std::string name);
	std::string getName(void) const;

	void attack();


};


#endif