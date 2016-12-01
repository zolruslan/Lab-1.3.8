#ifndef EXAM_H
#define EXAM_H

class CEquation {
private:
    double x, y, z;
public:
    CEquation ();
    CEquation (double x, double y, double z);
    CEquation (CEquation &equation);
};

#endif
