#include "CPU.h"

void display(int *arr, std::string& str) {
	read(arr, str);

	std::cout << "Now in RAM: " << str << std::endl;
	str = "";
}