#ifndef SED_HPP
#define SED_HPP

#include <iostream>
#include <string>
#include <fstream>

class Sed
{
	private:
	std::string _filename;
	std::string _s1;
	std::string _s2;

	public:
	Sed(std::string filename, std::string s1, std::string s2);
	~Sed(void);

	void		setS1(std::string s1);
	std::string	getS1(void);
	void		setS2(std::string s2);
	std::string	getS2(void);

	void execute();
};


#endif