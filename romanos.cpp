// Copyright [2023] <Adriele>
#include "romanos.hpp"
using namespace std;
int romanos_para_decimal(string const num_romano) {
  int numero = 0;
  map<char, int> numeros = {
    {'I', 1},
    {'V', 5},
    {'X', 10},
    {'L', 50},
    {'C', 100},
    {'D', 500},
    {'M', 1000},
  };

  for (auto &&i : num_romano){
    if (numero < numeros.at(i)){
      numero -= (numeros.at(i));
      numero = numero *(-1);
      }
    else
      numero += numeros.at(i);
  };
  return numero;
}
