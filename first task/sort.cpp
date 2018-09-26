#include "header.h"

void sort(char array[][10],int number_of_elements)
{
    char string[10];
    for (int i = 0; i < number_of_elements; i++)
    {
        for (int j = i; j < number_of_elements; j++)
        {
            if (compare(array[i], array[j]) == 0)
            {
               assign_string(string, array[j]);//equel to string  = array[j];
               assign_string(array[j],array[i]);
               assign_string(array[i],string);

            }
        }
    }
}