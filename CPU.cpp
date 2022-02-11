#include "CPU.h"
#include "iostream"

void compute(int *arr, int &sum) {
	
	for (int i = 0; i < 8; i++)
	{
		sum += arr[0+i];
	}

	std::cout << "Sum = " << sum;
	std::cout << std::endl;
	sum = 0;
}
