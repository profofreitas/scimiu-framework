#include <cmath>
#include "Vector.h"

Vector::Vector(double x_coord, double y_coord, double z_coord)
{
    setX(x_coord);
    setY(y_coord);
    setZ(z_coord);
}

void Vector::setX(double x)
{
    xCoordinate = x;
}

double Vector::getX()
{
    return xCoordinate;
}

void Vector::setY(double y)
{
    yCoordinate = y;
}

double Vector::getY()
{
    return yCoordinate;
}

void Vector::setZ(double z)
{
    zCoordinate = z;
}

double Vector::getZ()
{
    return zCoordinate;
}

double Vector::getMagnitude()
{   
    return sqrt( pow(getX(), 2) + pow(getY(), 2) + pow(getZ(), 2) );
}

Vector Vector::normalized()
{
    double magnitude = this->getMagnitude();
    
    double x = this->getX()/magnitude;
    double y = this->getY()/magnitude;
    double z = this->getZ()/magnitude;

    Vector v( x, y, z );
    
    return v;
}