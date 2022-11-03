/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2022-2023
  *
  * @file intervalos.cc
  * @autor alu0101562445@ull.edu.es
  * @fecha 3 nov 2022
  * @resumen El programa dicta los numeros en un intervalo elegido como input
  */

#include <iostream>

int main() {

  int numero1, numero2;
//  std::cout << "inserte los extremos del intervalo: ";
  std::cin >> numero1 >> numero2 ;
  while (numero1 < numero2) {
    std::cout << numero1 << ",";
    ++numero1;
  }
  std::cout << numero2 << std::endl;
}
