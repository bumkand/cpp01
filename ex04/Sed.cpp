#include "Sed.hpp"

Sed::Sed(std::string filename, std::string s1, std::string s2) :
	_filename(filename),
	_s1(s1),
	_s2(s2)
{
}

Sed::~Sed(void)
{
	//std::cout << "Sed Destructed" << std::endl;
}

void Sed::setS1(std::string s1)
{
	_s1 = s1;
}
std::string Sed::getS1(void) const
{
	return (_s1);
}
void Sed::setS2(std::string s2)
{
	_s2 = s2;
}
std::string	Sed::getS2(void) const
{
	return (_s2);
}

int Sed::execute()
{
	std::fstream file(_filename.c_str(), std::ios::in);
	if (!file.is_open())
	{
		std::cerr << "Error: unable to open file!" << std::endl;
		return (1);
	}

	std::ofstream Myfile((_filename + ".replace").c_str());
	if (!Myfile.is_open())
	{
		std::cerr << "Error: unable to create .replace file!" << std::endl;
		file.close();
		return (1);
	}

	std::string replace;
	bool read = false;
	long unsigned int position;
	while (getline(file, replace))
	{
		read = true;
		position = replace.find(_s1);
		while (position != std::string::npos && _s1.length() != 0)
		{
			replace.erase(position, _s1.length());
			replace.insert(position, _s2);
			position = replace.find(_s1, (position + _s2.length()));
		}
		Myfile << replace;
		if (!file.eof())
			Myfile << std::endl;
	}

	if (read == false)
	{
		if (file.eof())
			std::cerr << "File is empty" << std::endl;
		else
			std::cerr << "Error: unable to read file!" << std::endl;
	}
	
	file.close();
	Myfile.close();

	return (0);
}
