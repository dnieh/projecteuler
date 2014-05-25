#include <iostream>
using namespace std;

int main()
{
	int max = 1000;
	int total = 0;
	
	for (int i = 0; i < max; i++)
	{
		if (i % 3 == 0 || i % 5 == 0)
			total += i;
	}
	
	std::cout << total << std::endl;

	return 0;
}