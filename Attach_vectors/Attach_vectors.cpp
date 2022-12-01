/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica
 *
 * @file Attach_vector.cpp
 * @author Jiabo Cheng Pan alu0101560564@edu.ull.es
 * @date 27 11 2022
 * @brief El programa lee 2 vectores y los une.
 */


#include "Attach_vectors.h"

/**
 * La función (ProgramPurpose) imprime en pantalla el proposito y la función
 * principal del programa.
 */
void ProgramPurpose() {
  std::cout << "El programa lee 2 vectores y los une.\n\n";
}

/**
 * La segunda y última función del programa (AttachVectors) se encarga de leer
 * cada una de las componentes de ambos vectores e imprimirlos en orden.
 */
void AttachVectors(std::vector<int> vector1, std::vector<int> vector2, int vector1_size, int vector2_size) {
  for(int i{0}; i < vector1_size; ++i) {
    std::cout << vector1[i] << " ";
  }
  for(int i{0}; i < vector2_size; ++i) {
    std::cout << vector2[i] << " ";
  }
}
