#include <iostream>
#include <fstream>

#include "Plotter.h"
#include "VectorManager.h"

using namespace std;

Plotter::Plotter()
{

}

void Plotter::plot(deque<Vector> dq) 
{

    //prepare plot.
    ofstream outfile;

    outfile.open("vetor2d.p");

    deque<Vector> :: iterator it;
    for(it = dq.begin(); it != dq.end(); ++it)
    {
        Vector u = *it;

        outfile << "set arrow 1 from 0,0 to " << u.getX() << "," << u.getY() << "\n";
    }

    outfile << "set xr[0.0:10.0] \n";
    outfile << "set yr[0.0:10.0] \n";
    outfile << "f(x) = 0 \n";
    outfile << "plot f(x)";
    outfile.close();
    
    // plot
    system("gnuplot \'vetor2d.p\' -persist");
}