/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica
 *
 * @file Random_vector_components.h
 * @author Jiabo Cheng Pan alu0101560564@edu.ull.es
 * @date 27 11 2022
 * @brief El programa lee el número de componentes que tendrá el vector, y 2 números más que serán el intervalo en el que el programa generará la cantidad de números aleatorios que se indicón anteriormente
 */


#include <iostream>
#include <string>
#include <vector>
#include <random>

void ProgramPurpose();
void Usage(int number_of_arguments, std::string parameter1, std::string program_name);
std::vector<double> GenerateVector(const int size, const double lower, const double upper);
