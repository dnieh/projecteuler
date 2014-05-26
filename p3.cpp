#include <iostream>

int main()
{
	signed long long number =  600851475143;
	long arr[32] = {0};  // Not prime factors
	
	// Start from x = 2 and iterate up until number % x == 0
	long i = 3;
	int arrCounter = 0;
	
	while (i <= number)
	{
		if (number % i == 0)
		{
			arr[arrCounter] = i;
			arrCounter++;
			number /= i;
			continue;
		}
		else
			i++;
	}
	
	std::cout << arr[arrCounter - 1] << std::endl;
			
	return 0;
}