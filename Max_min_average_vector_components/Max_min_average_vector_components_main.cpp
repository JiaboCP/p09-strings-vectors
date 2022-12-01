/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica
 *
 * @file Max_min_average_vector_components_main.cpp
 * @author Jiabo Cheng Pan alu0101560564@edu.ull.es
 * @date 27 11 2022
 * @brief El programa genera el número indicado de número aleatorios en un intervalo e indica el mayor, el menor y el promedio de estos números.
 */

#include "Max_min_average_vector_components.h"

/**
 * @param[in] argc Numero de parametros en la línea de comandos.
 * @param[in] argv Vector que contiene (*argv) los parámetros.
 */
int main(int argc, char *argv[]) {
  ProgramPurpose();
  std::string parameter1{argv[1]},program_name{argv[0]};
  Usage(argc, parameter1, program_name);
  int param1{std::__cxx11::stoi(argv[1])};
  double param2{std::__cxx11::stod(argv[2])}, param3{std::__cxx11::stod(argv[3])};
  GenerateVector(param1, param2, param3);
  double average{0}, max_number, min_number;
  CalculateMaxMinAverage(GenerateVector(param1, param2, param3), param1, min_number, average, max_number);
  std::cout << std::fixed << std::setprecision(1);
  std::cout << min_number << " " << average << " " << max_number << std::endl;
  return 0;
}
