#include <iostream>

int main()
{
	int tempA, tempB, counter, total;
	tempA = 1;
	tempB = 2;
	counter = 0;
	total = 0;
	
	while (tempB <= 4000000)
	{
	   if (tempB % 2 == 0)
			total += tempB;
		counter = tempA + tempB;
		tempA = tempB;   // a becomes 2
		tempB = counter;  // b becomes the sum : 3
	}
	
	std::cout << total << std::endl;
}