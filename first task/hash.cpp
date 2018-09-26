#include "header.h"

int hash (char names[][10],int number_words)//вторая переменная отвечает за к-во слов;
{
    int temp = 0;
    int count = 0; //переменная для сбора аски символов всех букв в слове
    for (int j = 0; j < number_words; j++)
    {
        //for (int i = 0; i < 10; i++)
        int i = 0;
        while (names[j][i] != '\0')
        {
            //count += names[j][i];
            temp += names[j][i];
            //std::cout << names[j][i] << std::endl;
            i++;
        }
        temp /= i;
        count += temp;
        temp = 0;
    }
    return count;
}