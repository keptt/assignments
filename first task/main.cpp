#include "header.h"


int main()
{
    int words_number = generate_file();
    int words_number (0);
    //std::string name_of_file = "MyFile.txt";
    char name_of_file[] = "MyFile.txt";

    std::cout << "INput a number of words: ";
    std::cin >> words_number;

	// char **names = new char* [word_number];
	// for (int i = 0; i < word_number; i++)
	// {
		// names[i] = new char[10];
	// }
	// for (int i = 0; i < word_number; i++)
	// {
		// delete [] names[i];//nums[i] - разыменовали 1й указатель на указатель
	// }
	// delete[] names;
    char names[words_number][10];

    read_from_file (names, words_number, name_of_file);

    sort(names, words_number);

    write_in_file (names);
    std::cout << "hash = " << hash (names, words_number) << std::endl;


    return 0;
}
