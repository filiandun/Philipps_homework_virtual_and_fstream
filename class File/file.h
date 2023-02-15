#pragma once
#include <iostream>
#include <fstream>
#include <string>


class File
{
public:
	File() = default;
	virtual ~File();

protected:
	std::ifstream input_file;
	const char* path = nullptr;

public:
	void open_file(const char* path);
	virtual void display_file() = 0;

};



class BaseFile : public File
{
public:
	BaseFile() = default;
	~BaseFile() override = default;

public:
	void display_file() final override;

};



class ASCIIFile : public File
{
public:
	ASCIIFile() = default;
	~ASCIIFile() override = default;

public:
	void display_file() final override;

};



class BitFile : public File
{
public:
	BitFile() = default;
	~BitFile() override = default;

private:
	int convert_to_binary(int num);

public:
	void display_file() final override;

};
