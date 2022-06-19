#include <iostream>
#include<fstream>
#include<string>
int main()
{
    std::ifstream word;
    std::string way;
    std::cout << "Enter the file to open : ";
    std::cin >> way;
    word.open(way);
    if (!word.is_open())
    {
        std::cout << "The file is not open" << std::endl;
    }
    else 
    {
        std::string str;
        while (!word.eof())
        {
            std::getline(word, str, '\0');
            std::cout << str;
        }
    }
    word.close();
}
