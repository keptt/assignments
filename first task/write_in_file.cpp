#include "header.h"
//#include <fstream>//

void write_in_file(char names[][10])//, char sep = '\n')
{
    std::ofstream fout;
    fout.open("SortedFile.txt");
    if (!fout.is_open())
    {   std::cout << "Openning file Error";
        exit(1);
    }
    for (int i = 0; i < 7; i++)
    {
        fout << names[i] << '\n';
    }

    fout.close();
}