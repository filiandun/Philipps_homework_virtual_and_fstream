#include "file.h"



File::~File()
{
	this->input_file.close();
}

void File::open_file(const char* path)
{
	try
	{
		this->path = path;
		this->input_file.open(this->path, std::ios::in);

		if (!this->input_file.is_open())
		{
			throw "ERROR: FILE NOT FOUND";
		}

	}
	catch (const char* err)
	{
		std::cerr << err << std::endl;
	}
}







void BaseFile::display_file()
{
	try
	{
		if (!this->input_file.is_open())
		{
			throw "ERROR: FILE NOT FOUND!!!!";
		}

		char ch = 0;
		while (this->input_file.get(ch))
		{
			std::cout << ch;
		}
	}

	catch (const char* err)
	{
		std::cerr << err << std::endl;
	}
}






void ASCIIFile::display_file()
{
	try
	{
		if (!this->input_file.is_open())
		{
			throw "ERROR: FILE NOT FOUND!!!!";
		}

		char ch = 0;
		while (this->input_file.get(ch))
		{
			std::cout << ch << " ";
		}
	}
	catch (const char* err)
	{
		std::cerr << err << std::endl;
	}
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


void BitFile::display_file()
{
	try
	{
		if (!this->input_file.is_open())
		{
			throw "ERROR: FILE NOT FOUND!!!!";
		}

		char ch = 0;
		while (this->input_file.get(ch))
		{
			std::cout << convert_to_binary(ch) << " ";
		}
	}
	catch (const char* err)
	{
		std::cerr << err << std::endl;
	}
}
