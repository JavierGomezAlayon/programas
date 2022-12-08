#include <iostream>

void Asteriscos (int num_asterisco) {
  for (int i = num_asterisco; i > 0; --i) {
    std::cout << "*" ;
  }
}

void Espacios (int espacios) {
  while (espacios > 0) {
  std::cout << " " ;
  --espacios;
  }
}

void Rombo (int lado) {
  int num_asteriscos = 1;
  for (int i = lado; i > 1; --i) {
    Espacios (i-1);
    Asteriscos (num_asteriscos);
    num_asteriscos += 2;
    std::cout << std::endl;
  }
  for (int i ; i < lado ; ++i) {
    Espacios (i);
    Asteriscos (num_asteriscos);
    num_asteriscos -= 2;
    std::cout << std::endl;
  }
}

int main () {
  int lado;
  std::cin >> lado ;  
  Rombo (lado);
  
}