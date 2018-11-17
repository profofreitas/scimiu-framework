#include <iostream>
#include <fstream>
#include <deque>
#include "Simulation.h"
#include "Vector.h"
#include "VectorManager.h"
#include "Plotter.h"

using namespace std;
using std::cout;
using std::endl;

void Simulation::run()
{    
    Vector u(1.0, 3.0, 2.0);
    Vector v(2.0, 5.0, 3.0);
    
    VectorManager vm;

    Vector w = vm.sum(u, v);
    
    deque<Vector> collection;

    collection.push_front(u);
    collection.push_front(v);
    collection.push_front(w);

    Plotter p;
    p.plot(collection);
}

void Simulation::setLabel(string label)
{
    this->label = label;
}

string Simulation::getLabel()
{
    return this->label;
}