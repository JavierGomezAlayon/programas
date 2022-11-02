/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2022-2023
  *
  * @file cambio_minuscula_mayuscula.cc
  * @autor alu0101562445@ull.edu.es
  * @fecha 2 oct 2022
  * @resumen El programa cambia entre mayuscula y minuscula segun el caracte    r introducido
  */

#include <iostream>

int main() {
  char letra;
  
  std::cout << "introduce una letra: " ; 
  std::cin >> letra;

  letra += 32;
  std::cout << letra << std::endl;

  return 0;
}
