/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2022-2023
  *
  * @file .cc
  * @autor alu0101562445@ull.edu.es
  * @fecha 24 oct 2022
  * @resumen El programa  
  */

#include <iostream>

int main() {
  
  double N_practicas , N_cuestionarios , N_examen_final;
  int decididor;
  std::cout << "si quieres calcular tu nota final escribe 1 , si quieres saber que nota tienes que sacar en el examen final para sacar un 5 escribe 2 : ";
  std::cin >> decididor;

  if(decididor == 1) {

    std::cout << "introduzca las notas por este orden nota de las practicas nota de los cuestionarios nota del examne final: " ;
    std::cin >> N_practicas >> N_cuestionarios >> N_examen_final ;
    double nota_final;
    nota_final = (60*N_examen_final/100)+(20*N_cuestionarios/100)+(20*N_practicas/100);

    std::cout << "con esas notas vas a sacar un " << nota_final;  

  }

  else {
    
    std::cout << "introduzca las notas de las practicas y de los cuestionarios " ;
    std::cin >> N_practicas >> N_cuestionarios ; 
    double nota_final;
    
    nota_final = 100*(5-((20*N_cuestionarios/100)+(20*N_practicas/100)))/60;
    std::cout << "con esas notas vas a sacar un " << nota_final;


  }
  std::cout << std::endl;

}
