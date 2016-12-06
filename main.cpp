#include <iostream>
#include <cmath>
#include "CEquation.h"

using namespace std;

int main() {
    CEquation *equation = new CEquation (-2.235*pow(10, -2), 2.23, 15.221);

    cout << Equation (*equation) << endl;
    return 0;
}
