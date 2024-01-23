#ifndef Cercle_h
#define Cercle_h
#define PI 3.1415

#include "FormesGeometriques.h"


class Cercle : public FormesGeometriques {

 public:

    double CalculerSurface(double diametre, double inutile);

    double CalculerPerimetre(double diametre, double inutile);
    
    Cercle();
};

#endif // Cercle_h
