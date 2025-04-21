# ifndef CYLINDER_CPP
# define CYLINDER_CPP

# include "Cylinder.h"
#include <iomanip>
#define PI 3.141592653589793

double Cylinder :: SurfaceArea(){
    
    return ((2.0 * PI * radius * radius) + (2.0 * PI * radius * height));
}

double Cylinder :: Volume(){

    return (PI * radius * radius * height *  1.0);
}

double Cylinder :: Circumference(){

    return (2.0 * PI * radius);
}

istream & operator>>(istream & in, Cylinder & cldr)
{
    in >> cldr.radius >> cldr.height;
    return in;
}

ostream & operator<<(ostream & out, Cylinder & cldr)
{
    out << fixed << setprecision(3) << "Circumference: " << cldr.Circumference() << endl
                                         << "SurfaceArea: " << cldr.SurfaceArea() << endl
                                         << "Volume: " << cldr.Volume() << endl;
    return out;
}

# endif
