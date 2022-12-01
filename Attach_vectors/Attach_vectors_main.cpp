/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica
 *
 * @file Attach_vectors_main.cpp
 * @author Jiabo Cheng Pan alu0101560564@edu.ull.es
 * @date 27 11 2022
 * @brief El programa lee 2 vectores y los une.
 */


#include "Attach_vectors.h"

int main() {
  ProgramPurpose();
  std::vector<int> vector1, vector2;
  int vector1_size, vector2_size, vector_component;
  std::cin >> vector1_size;
  vector1.reserve(vector1_size);
  for(int i{0}; i < vector1_size; ++i) {
    std::cin >> vector_component;
    vector1.emplace_back(i);
    vector1[i] = vector_component;
  }
  std::cin >> vector2_size;
  vector2.reserve(vector2_size);
  for(int i{0}; i < vector2_size; ++i) {
    std::cin >> vector_component;
    vector2.emplace_back(i);
    vector2[i] = vector_component;
  }
  AttachVectors(vector1, vector2, vector1_size, vector2_size);
  return 0;
}
