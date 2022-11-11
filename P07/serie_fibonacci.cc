/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2022-2023
  *
  * @file serie_fibonacci.cc
  * @autor alu0101562445@ull.edu.es
  * @fecha 11 nov 2022
  * @resumen El programa pone los primeros n numeros.
  */

#include <iostream>

int main() {
  std::cout << "Este programa saca los primeros n números de la serie de Fibonacci segun los numeroa que tu le indiques " << std::endl;
  std::cout << "inserta el numero de iteraciones para la serie de Fibonacci" << std::endl;
  int numero_iteraciones;
  std::cin >> numero_iteraciones ;
  if (numero_iteraciones <= 0) {
    return 1;
  }
  if (numero_iteraciones <= 2) {
    std::cout << "0" ;
    if (numero_iteraciones == 2) {
      std::cout << " 1" ;
    }
    std::cout << std::endl;
    return 0;
  }
  int penultimo = 0, ultimo = 1, actual;
  std::cout << "0 1 " ;
  for (int i = numero_iteraciones; i > 0; --i) {
    actual = penultimo + ultimo;
    std::cout << actual << " " ;
    penultimo = ultimo;
    ultimo = actual;
  }
  std::cout << std::endl;
}

