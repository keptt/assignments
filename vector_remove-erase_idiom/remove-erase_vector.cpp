#include <vector>
#include <iostream>
#include <algorithm>
#include <numeric> 
#include <algorithm> 
#include <conio.h>

void print(std::vector<int> &v);

int main()
{
	std::vector<int> Vec(10);
	std::iota(Vec.begin(), Vec.end(), 0);


	print(Vec);
	std::cout << '\n';

	std::random_shuffle(Vec.begin(), Vec.end());

	print(Vec);
	std::cout << '\n';

	Vec.erase(std::remove(Vec.begin(), Vec.end(), 8), Vec.end());
	print(Vec);

	_getch()
	return 0;
}

void print(std::vector<int> &v)
{
	for (int i = 0; i < v.size(); i++)
	{
		std::cout << v[i] << " ";
	}
}