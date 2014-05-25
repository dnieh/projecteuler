#include <iostream>

int main()
{
	int tempA, tempB, counter, total;
	tempA = 1;
	tempB = 2;
	counter = 0;
	total = 2;
	
	while (tempB <= 4000000)
	{
		counter = tempA + tempB;
		tempA = tempB;   // a becomes 2
		tempB = counter;  // b becomes the sum : 3
		
		if (counter % 2 == 0)
			total += counter;
	}
	
	std::cout << total << std::endl;
}