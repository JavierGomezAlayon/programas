/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2022-2023
  *
  * @file temperatura.cc
  * @autor alu0101562445@ull.edu.es
  * @fecha 9 nov 2022
  * @resumen El programa te da una respuesta según la temperatura indicada. 
  */

#include <iostream>

int main() {
  //std::cout << "Este programa te da una respuesta según la temperatura indicada. " << std::endl;
  //std::cout << "inserta la temperatura" << std::endl;
  int temperatura;
  std::cin >> temperatura ;
  if (temperatura > 30) {
    std::cout << "it's hot" << std::endl;
  }
  if (temperatura < 10) {
    std::cout << "it's cold" << std::endl;
  }
  if (temperatura <= 30 && temperatura >= 10) {
    std::cout << "it's ok" << std::endl;
  }
  if (temperatura <= 0) {
    std::cout << "water would freeze" << std::endl;
  }
  if (temperatura >= 100) {
    std::cout << "water would boil" << std::endl;
  }
}
