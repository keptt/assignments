#include "header.h"

void read_from_file(char names[][10],int words_number,char filename[])//, std::string filename)
{
    std::ifstream fin;
    //std::string name; //строка для хранения имен в массиве;
    char name[14];
    fin.open (filename);

    if (!fin.is_open())
    {
        std::cout << "File reading error";
        exit(1);
    }

    int i = 0;
    while (!fin.eof())
    {
        fin >> names[i];
        std::cout << names[i] << std::endl;
        i++;
    }
    fin.close();
}