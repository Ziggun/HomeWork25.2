#include "RAM.h"
#include "string"

		void write(int* arr, int* a, std::string &line) {
			if (line == "") {
				for (int i = 0; i < 8; i++) {
					std::cin >> *a;
					arr[0 + i] = *a;
				}
			}
			else {
				for (int i = 0; i < 8; i++) {
					auto c = line.at(i);
					int a = std::stoi(&c);
					arr[0 + i] = a;
				}
				line = "";
			}
			
		}
void read(int *arr, std::string &str) {
	str = "";
	for (int i = 0; i < 8; i++) {
		str +=std::to_string(arr[0 + i]);
	}
}