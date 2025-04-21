# ifndef CYLINDER_CPP
# define CYLINDER_CPP

# include "Cylinder.h"
# include <iomanip>
# include <iostream>
# include <math.h>
using namespace std;

double pi = M_PI;
double Cylinder :: SurfaceArea(){
    double sur;
    sur = pi * radius * radius * 2 + pi * 2 * radius * height;
    return sur;
}

double Cylinder :: Volume(){
    double vol;
    vol = pi * radius * radius * height;
    return vol;
}

double Cylinder :: Circumference(){
    double cir;
    cir = pi * radius * 2;
    return cir;
}

istream & operator>>(istream & in, Cylinder & cldr)
{
    in >> cldr.radius >> cldr.height;
    return in;
}

ostream & operator<<(ostream & out, Cylinder & cldr)
{
    out << fixed << setprecision(3);
    out << "Circumference: " << cldr.Circumference() << endl;
    out << "SurfaceArea: " << cldr.SurfaceArea() << endl;
    out << "Volume: " << cldr.Volume() << endl;
    return out;
}
//dev test

# endif
