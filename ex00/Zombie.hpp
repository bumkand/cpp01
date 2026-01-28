#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>
#include <cctype>
#include <string>

class Zombie
{
	private:
		std::string	_name;

	public:
		Zombie();
		~Zombie(void);
		void	setName(std::string name);
		std::string	getName(void) const;
		void	announce( void ) const;
};

	Zombie* newZombie( std::string name );
	void randomChump( std::string name );

#endif