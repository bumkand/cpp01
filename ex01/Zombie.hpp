#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>
#include <cctype>

class Zombie
{
	private:
		std::string	_name;
		int			_index;

	public:
		Zombie();
		~Zombie(void);

		void	announce(void) const;
		void	setName(std::string name);
		std::string	getName(void) const;
		void	setIndex(int i);
		int		getIndex(void) const;
};


Zombie* zombieHorde( int N, std::string name );

#endif