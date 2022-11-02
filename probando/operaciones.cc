/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2022-2023
  *
  * @file operaciones.cc
  * @autor alu0101562445@ull.edu.es
  * @fecha 1 nov 2022
  * @resumen El programa enseña todas las operaciones dados dos numeros
  */

#include <iostream>

int main() {

  int numero1, numero2
  std::cout << "introduce dos números" ;
  std::cin >> numero1 >> numero2 ;

  std::cout << numero1 << "+" << numero2 << "=" << (numero1 + numero2) << std::endl;

  std::cout << numero1 << "-" << numero2 << "=" << (numero1 - numero2) << std::endl;

  std::cout << numero1 << "*" << numero2 << "=" << (numero1 * numero2) << std::endl;

  std::cout << numero1 << "/" << numero2 << "=" << (numero1 / numero2) << std::endl;

  std::cout << numero1 << "%" << numero2 << "=" << (numero1 % numero2) << std::endl;

  return 0;

}
