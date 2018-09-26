#include "header.h"

int is_in (char n, char alphab[], char alphab_cap[])
{
    char count = 0;
    while (alphab[count] != '\0')
    {
        if (alphab[count] == n)
            return count;
        count++;
    }
    count = 0;
    while (alphab_cap[count] != '\0')
    {
        if (alphab_cap[count] == n)
            return count;
        count++;
    }
}