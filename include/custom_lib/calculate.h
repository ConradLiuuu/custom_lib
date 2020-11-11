#ifndef CALCULATE_H
#define CALCULATE_H

#include <iostream>

class Calculate
{
private:
  double a,b;
  
public:
  Calculate();
  double add(double num1, double num2);
  double add();
  void assigne(double num1, double num2);
  double subtract(double num1, double num2);
};

#endif