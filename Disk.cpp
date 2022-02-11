#include "Disk.h"
#include <string>

void save(int* arr,std::string &str) {
	read(arr, str);
	std::ofstream out;
	out.open("D:\\LEARN\\out.txt");
	if (out.is_open())
	{
		out << str << std::endl;
    std::cout << "SAVED" << std::endl;
  }
  else {
    std::cout << "FAIL";
  }
  out.close();
}

void load(int* arr, int* a, std::string &line) {
  std::cout << std::endl;
 
  std::ifstream out("D:\\LEARN\\out.txt"); 
  if (out.is_open())
  {
    while (getline(out, line, ' '))
    {
      out >> line;
    }
  }
  write(arr, a, line);
  out.close();
  std::cout << "LOADED" << std::endl;
}