#include "pch.h"
#include <iostream>
#include <numeric>
#include <vector>
#include <algorithm>
#include <conio.h>

void print_vector(std::vector<int> &vect);
template <class RandomAccessIterator>
int Sum(RandomAccessIterator i, RandomAccessIterator j);

int main()
{
	std::vector<int> vect(10);

	std::iota(vect.begin(), vect.end(), rand() % 25);
	std::random_shuffle(vect.begin(), vect.end());
	print_vector(vect);

	//std::vector<int>::iterator iterator = vect.begin();
	int res = Sum(vect.begin(), vect.end());

	_getch();
	return 0;
}

template <class RandomAccessIterator>
int Sum(RandomAccessIterator i, RandomAccessIterator j)
{
	int sum = 0;
	RandomAccessIterator start = i;
	//std::vector<int>::iterator end = j;
	if (start - j < 0)
	{
		while (start != j)
		{
			sum += *start;
			std::cout << *start << " ";
			start++;
		}
	}
	else
	{
		while (start != j)//start = end
		{
			start--;
			sum += *start;
			std::cout << *start << " ";
		}
	}
	std::cout << std::endl;

	return sum;
}

void print_vector(std::vector<int> &vect)
{
	for (std::vector<int>::iterator i = vect.begin(); i < vect.end(); i++)
	{
		std::cout << *(i) << " ";
	}
	std::cout << "\n";
}