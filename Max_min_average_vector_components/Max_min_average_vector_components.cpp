/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica
 *
 * @file Max_min_average_vector_components.cpp
 * @author Jiabo Cheng Pan alu0101560564@edu.ull.es
 * @date 27 11 2022
 * @brief El programa genera el número indicado de número aleatorios en un intervalo e indica el mayor, el menor y el promedio de estos números.
 */

#include "Max_min_average_vector_components.h"

/**
 * La función (ProgramPurpose) imprime en pantalla el proposito y la función
 * principal del programa.
 */
void ProgramPurpose() {
  std::cout << "El programa genera el número indicado de número aleatorios en un intervalo e indica el mayor, el menor y el promedio de estos números.\n\n";
}

/**
 * La siguiente funcición (Usage), se encarga de comprobar si la cantidad de parámetros
 * introducidos en la línea de comandos es correcta, y si no lo es da un mensaje
 * de error ceerrar la ejecución del programa. Por otro lado, si el valor del
 * parametro 1 es "--help", imprimirá un texto de ayuda sobre el uso del
 * programa.
 *
 * @param[in] number_of_arguments Número de parámetros en la línea de comandos.
 * @param[in] parameter1 2º componente del vector.
 * @param[in] program_name 1º componente del vector.
 */
void Usage(int number_of_arguments, std::string parameter1, std::string program_name) {
  if(parameter1 == "--help") {
    std::cout << "Para ello ha de escribir en la linea de comandos ./(nombre_del_programa) \"param1\" \"param2\" \"param3\", donde todos los parámetros han de ser número enteros o decimales.\n\n";
    exit(EXIT_SUCCESS);
  }
  else if(number_of_arguments != 4) {
    std::cout << program_name << ": El número de parámetros trás la ejecución del programa es incorrecto\n";
    std::cout << "Utilize: " << program_name << " --help para obetener información sobre el programa\n\n";
    exit(EXIT_SUCCESS);
  }
}

/**
 * La siguiente función (GenerateVector) se encarga de generar el
 * vector con el tamaño indicado y los componentes de manera aleatoria en el
 * intervalo indicado.
 *
 * @param[in] size Tamaño del vector.
 * @param[in] lower Número mínimo del intervalo.
 * @param[in] upper Número máximo del intervalo.
 *
 * @return my_vector El vector generado.
 */
std::vector<double> GenerateVector(const int size, const double lower, const double upper) {
  std::vector<double> my_vector;
  my_vector.reserve(size);
  for(int i{0}; i < size; ++i) {
    my_vector.emplace_back(i);  //Le da el tamaño indicado por "size" al vector".
    std::random_device random_component;
    std::uniform_real_distribution<double> dist(lower, upper);  //Crea un número aleatorio.
    my_vector[i] = dist(random_component);  //Le da el valor del número aleatorio al componente del vector.
  }
  return my_vector;
}

/**
 * La siguiente y última función (CalculateMaxMinAverage) se encarga de sumar las componentes
 * del vector para luego dividirlo entre el número de componentes, hallando así
 * la media. Por otro lado halla el mayor y el menor número dentro de los
 * componentes del vector.
 *
 * @param[in] my_vector El vector con números aleatorios generados que se
 * utilizar para la suma.
 * @param[in] size El tamaño del vector.
 * @param[in] &min_number El menor número dentro del vector.
 * @param[in] &average El valor medio de las componentes del vector.
 * @param[in] &max_number El mayor número dentro del vector.
 */
void CalculateMaxMinAverage(std::vector<double> my_vector, const int size, double &min_number, double &average, double &max_number) {
  for(int i{0}; i < size; ++i) {
    average += my_vector[i];
  }
  average /= size;
  max_number = *std::max_element(my_vector.begin(), my_vector.end());
  min_number = *std::min_element(my_vector.begin(), my_vector.end());
}
