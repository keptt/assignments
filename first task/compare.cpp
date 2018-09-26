#include "header.h"

bool compare (char array1[], char array2[])
{
    int len = 0;
    char alphab_cap[] = "ZYXWVUTSRQPONMLKJIHGFEDCBA";
    char alphab[] = "zyxwvutsrqponmlkjihgfedcba";
    
    int counter1 = 0, counter2 = 0;

    if (strcmp(array1, array2) < 0)//ищем наименьшую строку
        len = strlen(array1);//array1 наименьший
    else
        len = strlen(array2);//array2 наименьший

    for (int i = 0; i < len; i++)//
    {
        counter1 = is_in(array1[i], alphab, alphab_cap);
        counter2 = is_in(array2[i], alphab, alphab_cap);
        if (counter1 > counter2)
        {
            return 1;
        }
        else if (counter1 < counter2)
        {
            return 0;
        }
    }
     //если вышли из цикла, значит слова равны, но одно из них возможно короче. Ищем короткое слово
     if (len == strlen(array1))//если первое слово оказалось короче, то такое слово идет первым в алфавитном порядке
     {
         return 1;
     }
     return 0;
}