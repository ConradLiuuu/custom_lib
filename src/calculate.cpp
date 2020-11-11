#include "custom_lib/calculate.h"

Calculate::Calculate(){
  a = 0;
  b = 0;
}

double Calculate::add(double num1, double num2){
  return num1 + num2;
}

double Calculate::add(){
  return Calculate::a + Calculate::b;
}

void Calculate::assigne(double num1, double num2){
  Calculate::a = num1;
  Calculate::b = num2;
}

double Calculate::subtract(double num1, double num2){
  return num1 - num2;
}