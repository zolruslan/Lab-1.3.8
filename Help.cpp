#include <cmath>
#include "CEquation.h"
#include "Help.h"

double Equation (CEquation &equation) {
    return exp(fabs(equation.x-equation.y)) * pow(fabs(equation.x-equation.y), equation.x+equation.y) / (atan(equation.x) + atan(equation.z)) + pow(pow(equation.x, 6)+pow(log(equation.y), 2), 1/3);
}
