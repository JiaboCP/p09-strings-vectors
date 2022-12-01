/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica
 *
 * @file Max_min_average_vector_components.h
 * @author Jiabo Cheng Pan alu0101560564@edu.ull.es
 * @date 27 11 2022
 * @brief El programa genera el número indicado de número aleatorios en un intervalo e indica el mayor, el menor y el promedio de estos números.
 */

#include <iostream>
#include <string>
#include <vector>
#include <random>
#include <iomanip>
#include <algorithm>
#include <iterator>

void ProgramPurpose();
void Usage(int number_of_arguments, std::string parameter1, std::string program_name);
std::vector<double> GenerateVector(const int size, const double lower, const double upper);
void CalculateMaxMinAverage(std::vector<double> my_vector, const int size, double &min_number, double &average, double &max_number);
