#include <iostream>

void PrintNumber (int numero) {
  for (int i = numero ; i > 0 ; --i) {
    std::cout << numero ;
  }
}

void Square (int numero) {
  for (int i = numero; i > 0; --i) {
    PrintNumber (numero);
    std::cout << std::endl;
  }
}

int main () {
  int value, endl = -1;
  while (std::cin >> value) {
    ++endl; 
    if (endl > 0) {
      std::cout << std::endl;
      --endl;
    }
    Square (value);
  }
  return 0;
}