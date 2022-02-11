#include "CPU.h"

int main()
{
  int arr[8];
  int a = 0;
  int sum = 0;
  std::string str;
  std::string com = "";
  std::string line = "";
  
  while (com != "exit") {
    std::cout << "Input the command" << std::endl;
    std::cin >> com;
    if (com == "input") {
      input(arr, &a, line);
    }
    else if (com == "compute") {
      compute(arr, sum);
    }
    else if (com == "display") {
      display(arr, str);
    }
    else if (com == "save") {
      save(arr, str);
    }
    else if (com == "load") {
      load(arr, &a, line);
    }
  }
  return 0;
}


