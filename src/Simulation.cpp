#include <iostream>
#include <fstream>
#include "Simulation.h"
#include "Vector.h"
#include "VectorManager.h"

using namespace std;
using std::cout;
using std::endl;

void Simulation::run()
{
    cout << "Running my first simylation" << endl;
    
    Vector u(1.0, 3.0, 2.0);
    Vector v(2.0, 5.0, 3.0);
    
    VectorManager vm;

    Vector w = vm.sum(u, v);

    //prepare plot.
    ofstream outfile;

    outfile.open("vetor2d.p");

    outfile << "set arrow 1 from 0,0 to " << w.getX() << "," << w.getY() << "\n";
    outfile << "set xr[0.0:10.0] \n";
    outfile << "set yr[0.0:10.0] \n";
    outfile << "f(x) = 0 \n";
    outfile << "plot f(x)";
    outfile.close();

    // plot
    system("gnuplot \'vetor2d.p\' -persist");

}

void Simulation::setLabel(string label)
{
    this->label = label;
}

string Simulation::getLabel()
{
    return this->label;
}