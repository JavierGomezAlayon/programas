/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2022-2023
  *
  * @file union_intervalos.cc
  * @autor alu0101562445@ull.edu.es
  * @fecha 11 nov 2022
  * @resumen El programa saca la union de los dos intervalos 
  */

#include <iostream>

int main() {
  int numeroA1,numeroA2,numeroB1,numeroB2; 
  std::cin >> numeroA1 >> numeroA2 >> numeroB1 >> numeroB2 ;
  if (numeroB1 <= numeroA2) {
    int minimo;
    if (numeroA1 <= numeroB1 ) {
      minimo = numeroA1;
    }
    else {
      minimo = numeroB1;
    }

    int maximo;    
    if (numeroA2 <= numeroB2) {
      maximo = numeroA2; 
    }
    else {
      maximo = numeroB2;
    }
    std::cout << "[" << minimo << "," << maximo << "]" << std::endl;
  }
  else {
    std::cout << "[]" << std::endl;
    return 0;
    
  }
}
