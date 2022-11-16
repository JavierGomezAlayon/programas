/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2022-2023
  *
  * @file intervalos_2.cc
  * @autor alu0101562445@ull.edu.es
  * @fecha 16 nov 2022
  * @resumen El programa given two intervals, tells if one is inside the other.  
  */

#include <iostream>

void AnalisisIntervalos (int numA1, int numA2, int numB1, int numB2) {
  if (numA1 == numB1 && numA2 == numB2) {
    std::cout << "=" << std::endl;
    return;
  }
  if (numA1 >= numB1 && numA2 <= numB2) {
    std::cout << "1" << std::endl;
    return;
  }
  if (numA1 <= numB1 && numA2 >= numB2) {
    std::cout << "2" << std::endl;
    return;
  }
  std::cout << "?" << std::endl;
  return;
}

int main() {
  //std::cout << "inserta dos intervalos" << std::endl;
  int numA1, numA2, numB1, numB2;
  std::cin >> numA1 >> numA2 >> numB1 >> numB2 ; 
  AnalisisIntervalos (numA1, numA2, numB1, numB2);
  return 0;
}
