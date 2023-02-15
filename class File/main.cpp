#include <iostream>
#include <fstream>
#include <string>
#include "file.h"



int main()
{
    setlocale(LC_ALL, "rus");


// ФАЙЛ НЕ НАЙДЕН
    std::cout << "ФАЙЛ НЕ НАЙДЕН: " << std::endl;

    ASCIIFile file_not_found;

    file_not_found.open_file("D:\\ФАЙЛ_НЕ_СУЩЕСТВУЕТ.txt");
    file_not_found.display_file();
    
    
    std::cout << std::endl;


// ПРОСТОЙ ВЫВОД
    std::cout << "ПРОСТОЙ ВЫВОД: " << std::endl;

    BaseFile file;

    file.open_file("D:\\text.txt");
    file.display_file();


    std::cout << std::endl << std::endl;


// ВЫВОД В ASCII
    std::cout << "ВЫВОД В ASCII: " << std::endl;

    ASCIIFile ascii_file;

    ascii_file.open_file("D:\\text.txt");
    ascii_file.display_file();


    std::cout << std::endl << std::endl;


// ВЫВОД В ДВОИЧНОЙ СИСТЕМЕ СЧИСЛЕНИЯ
    std::cout << "ВЫВОД В ДВОИЧНОЙ СИСТЕМЕ СЧИСЛЕНИЯ: " << std::endl;

    BitFile bit_file;


    bit_file.open_file("D:\\text.txt");
    bit_file.display_file();


    std::cout << std::endl << std::endl;


    return 0;
}
