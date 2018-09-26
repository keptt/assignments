#pragma once

#include <iostream>
#include <fstream>
#include <string>
#include <ctime>
#include <cstdlib>
#include<string.h>

void write_in_file(char names[][10]);

int hash (char names[][10],int number_words);

void read_from_file(char names[][10], int words_number, char string[]);//, std::string);

int generate_file();

bool compare (char array1[], char array2[]);

int is_in (char n, char alphab[], char alphab_cap[]);

void assign_string(char array1[], char tobeassigned[]);

void sort(char array[][10],int number_of_elements);