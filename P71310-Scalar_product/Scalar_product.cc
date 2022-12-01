 /**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica
 *
 * @file Scalar_product.cc
 * @author Jiabo Cheng Pan alu0101560564@edu.ull.es
 * @date 28 11 2022
 * @brief The scalar product of two vectors
 * @bugs No bugs
 * @see https://jutge.org/problems/P71310_en
 */

#include <iostream>
#include <vector>

double scalar_product(const std::vector<double>& u, const std::vector<double>& v) {
  double total_sum{0.0}; 
  int size{sizeof(u)};
  for(int i{0}; i <= size; ++i) {
    total_sum += u[i] * v[i];
  }
  return total_sum;
}

int main() {
  std::vector<double> vector_u, vector_v;
  double components;
  int size = 0;
   while(std::cin >> components) {
    vector_u.emplace_back(size);
    ++size;
    vector_u[size] = components;
  }
  while(std::cin >> components) {
    vector_v.emplace_back(size);
    ++size;
    vector_v[size] = components;
  }
  std::cout << scalar_product(vector_u, vector_v) << std::endl;
  return 0;
}
    
