/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica
 *
 * @file Sum_vector_components_main.cpp
 * @author Jiabo Cheng Pan alu0101560564@edu.ull.es
 * @date 27 11 2022
 * @brief El programa genera el número indicado de número aleatorios en un intervalo y los suma.
 */

#include <iostream>
#include <string>
#include <vector>
#include <random>
#include <iomanip>

void ProgramPurpose();
void Usage(int number_of_arguments, std::string parameter1, std::string program_name);
std::vector<double> GenerateVector(const int size, const double lower, const double upper);
double ReduceSum(std::vector<double> my_vector, const int size);
