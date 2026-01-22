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
		void	setIndex(int i);
};


Zombie* zombieHorde( int N, std::string name );

#endif