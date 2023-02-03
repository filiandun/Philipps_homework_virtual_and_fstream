#pragma once
#include <iostream>
#include <fstream>
#include <string>

using namespace std;

class File
{
public:
	File() = default;
	virtual ~File() = default;

public:
	virtual void display(const char* path) = 0;

};



class BaseFile : public File
{
public:
	BaseFile() = default;
	~BaseFile() override = default;

public:
	void display(const char* path) final override;

};



class ASCIIFile : public File
{
public:
	ASCIIFile() = default;
	~ASCIIFile() override = default;

public:
	void display(const char* path) final override;

};



class BitFile : public File
{
public:
	BitFile() = default;
	~BitFile() override = default;

private:
	int convert_to_binary(int num);

public:
	void display(const char* path) final override;

};
