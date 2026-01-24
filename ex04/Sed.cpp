#include "Sed.hpp"

Sed::Sed(std::string filename, std::string s1, std::string s2) :
	_filename(filename),
	_s1(s1),
	_s2(s2)
{
}

Sed::~Sed(void)
{
	std::cout << "Sed Destructed" << std::endl;
}

void Sed::setS1(std::string s1)
{
	_s1 = s1;
}
std::string Sed::getS1(void)
{
	return (_s1);
}
void Sed::setS2(std::string s2)
{
	_s2 = s2;
}
std::string	Sed::getS2(void)
{
	return (_s2);
}

void Sed::execute()
{
	std::fstream file(_filename.c_str(), std::ios::in);
	if (!file.is_open())
	{
		std::cerr << "Error: unable to open file!" << std::endl;
		return;
	}

	std::string replace;
	if (!getline(file, replace))
	{
		if (file.eof())
			std::cout << "Empty file" << std::endl;
		else
			std::cerr << "Error: Failed to read data" << std::endl;
		file.close();
		return;
	}
	long unsigned int position;
	std::ofstream Myfile((_filename + ".replace").c_str());
	position = replace.find(_s1);
	while (position != std::string::npos && _s1.length() != 0)
	{
		replace.erase(position, _s1.length());
		replace.insert(position, _s2);
		position = replace.find(_s1, (position + _s2.length()));
	}
	Myfile << replace << std::endl;
	while (getline(file, replace))
	{
		position = replace.find(_s1);
		while (position != std::string::npos)
		{
			replace.erase(position, _s1.length());
			replace.insert(position, _s2);
			position = replace.find(_s1, (position + _s2.length()));
		}
		Myfile << replace << std::endl;
	}
	
	file.close();

}
