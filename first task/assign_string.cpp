#include "header.h"

void assign_string(char array1[], char tobeassigned[]) //функция присвоения одной строки другой//
{
    int i = 0;
    while (array1[i] != '\0') //&& tobeassigned[i] != '\0')
    {
        array1[i] = tobeassigned[i];// 
    }
}