#include <deque>
#include "VectorManager.h"

using namespace std;

VectorManager::VectorManager(){

}

Vector VectorManager::sum(Vector u, Vector w)
{
    double x = u.getX() + w.getX();
    double y = u.getY() + w.getY();
    double z = u.getZ() + w.getZ();

    Vector v(x, y, z);
    
    return v;
}