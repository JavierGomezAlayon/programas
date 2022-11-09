/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2022-2023
  *
  * @file first_cubes.cc
  * @autor alu0101562445@ull.edu.es
  * @fecha 9 nov 2022
  * @resumen El programa te da los primeros n cubos siendo n el numero insertado
  */

#include <iostream>

long long CuboDe (int numero) {
  return numero*numero*numero;
}

int main() {
  //std::cout << "Este programa te da los primeros n cubos siendo n el numero insertado " << std::endl;
  //std::cout << "inserta el numero e cubos que quieres: " << std::endl;
  int Num_cubos;
  std::cin >> Num_cubos;
  for (int i=0 ; i < Num_cubos ; ++i) {
    std::cout << CuboDe (i) << "," ;
  }
  std::cout << CuboDe (Num_cubos) << std::endl;
}
