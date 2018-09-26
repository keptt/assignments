#include "header.h"
//#include <fstream>
int generate_file()
{
    srand(time(NULL));

    //std::string name;
    char name [20];
    std::ofstream fout;

    std::cout << "Enter the name of the file: ";
    std::cin >> name;

    //очистка потока//
    std::cin.clear();
    std::cin.ignore(2, '\n');

    fout.open(name, std::ofstream::app);

    //ПРОВЕРКА ОТКРЫТИЯ//
    if (!fout.is_open())
    {
        std::cout << "File openning error" << std::endl;
        //return;
        exit(1);
    }

    int word_number = 10;
    char sep = ' ';

    std::cout << "Input a number of words: ";
    std::cin >> word_number;
    std::cout << "Input a separator [0-' ', 1 - '/n', 2 - '/t']: ";
    std::cin >> sep;
    switch (sep)
    {
    case '0':
        sep = ' ';
        break;
    case '1':
        sep = '\n';
        break;
    case '3':
        sep = '\t';
        break;
    default:
        // std::cout << "Bad INput";
        // return;/..or../exit(1);
        sep = '\n';
    }

    //очистка потока//
    std::cin.clear();
    std::cin.ignore(10, '\n');
//    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

    int letter_number = 0;
    int index = 0;//индекс рандомной буквы в массиве всех возможных букв для задания имен
    char allletters[16] = "esytumiporvaskc";
    char ALLLETTERS[16] = "ESYTUMIPORVASKC";
    char current_letter;//буква которая будет записана в файл, т. к. запись производится побуквенно

    while (word_number > 0)
    {
        letter_number = rand()%7 + 4;//букв в слове
        for (int i = 1; i <= letter_number; i++)
        {
            index = rand()%15;//16 - кол-во элементов в массиве букв, а 15 - индекс 16 элемента//рандомим букву

            i == 1 ? current_letter = ALLLETTERS[index] : current_letter = allletters[index];// 1я буква будет заглавной

            fout << current_letter;
        }

        fout << sep;//??????????\\\\n
        word_number--;
    }
    fout.close();
    return word_number;
}