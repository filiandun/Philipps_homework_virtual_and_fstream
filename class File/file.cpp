#include "file.h"


void BaseFile::display(const char* path)
{
	std::ifstream input_file(path);

	if (input_file.is_open())
	{
		std::string s;
		while (getline(input_file, s))
		{
			std::cout << s;
		}
	}

	else
	{
		std::cerr << "ERROR: FILE NOT FOUND (" << path << ")" << std::endl;
	}
}





void ASCIIFile::display(const char* path)
{
	std::ifstream input_file(path);

	if (input_file.is_open())
	{
		char ch = 0;
		while (input_file.get(ch))
		{
			std::cout << (int) ch << " ";
		}
	}
	else
	{
		std::cerr << "ERROR: FILE NOT FOUND (" << path << ")" << std::endl;
	}
	
	input_file.close();
}






int BitFile::convert_to_binary(int num)
{
	int bin = 0;
	int i = 1;

	while (num)
	{
		bin += (num % 2) * i;
		i *= 10;
		num /= 2;
	}

	return bin;
}

void BitFile::display(const char* path)
{
	std::ifstream input_file(path);

	if (input_file.is_open())
	{
		char ch = 0;
		while (input_file.get(ch))
		{
			std::cout << convert_to_binary((int) ch) << " ";
		}
	}
	else
	{
		std::cerr << "ERROR: FILE NOT FOUND (" << path << ")" << std::endl;
	}

	input_file.close();
}

