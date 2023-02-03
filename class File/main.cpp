#include <iostream>
#include <fstream>
#include <string>
#include "file.h"



int main()
{
    setlocale(LC_ALL, "rus");


// ФАЙЛ НЕ НАЙДЕН
    std::cout << "ФАЙЛ НЕ НАЙДЕН: " << std::endl;

    File* file_not_found = new ASCIIFile;
    file_not_found->display("D:\\ФАЙЛ_НЕ_СУЩЕСТВУЕТ.txt"); 
    
    
    std::cout << std::endl;


// ПРОСТОЙ ВЫВОД
    std::cout << "ПРОСТОЙ ВЫВОД: " << std::endl;

    File* file = new BaseFile;
    file->display("D:\\text.txt");


    std::cout << std::endl << std::endl;


// ВЫВОД В ASCII
    std::cout << "ВЫВОД В ASCII: " << std::endl;

    File* ascii_file = new ASCIIFile;
    ascii_file->display("D:\\text.txt");


    std::cout << std::endl << std::endl;


// ВЫВОД В ДВОИЧНОЙ СИСТЕМЕ СЧИСЛЕНИЯ
    std::cout << "ВЫВОД В ДВОИЧНОЙ СИСТЕМЕ СЧИСЛЕНИЯ: " << std::endl;

    File* bit_file = new BitFile;
    bit_file->display("D:\\text.txt");


    std::cout << std::endl << std::endl;


    

    return 0;
}
