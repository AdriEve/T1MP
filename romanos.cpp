// Copyright [2023] <Adriele>
#include "romanos.hpp"
int romanos_para_decimal(std::string const num_romano) {
  if (num_romano== "I")
    return 1;
  else if (num_romano== "V")
    return 5;
  else if (num_romano== "X")
    return 10;
  else if (num_romano== "L")
    return 50;
  else if (num_romano== "C")
    return 100;
  else if (num_romano== "D")
    return 500;
  else if (num_romano== "M")
    return 1000;
  return -1;
}
