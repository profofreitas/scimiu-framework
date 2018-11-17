#include <iostream>
#include "Simulation.h"

using std::cout;
using std::endl;

void Simulation::run()
{
    cout << "Running my first simylation" << endl;
}

void Simulation::setLabel(string label)
{
    this->label = label;
}

string Simulation::getLabel()
{
    return this->label;
}