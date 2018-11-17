#ifndef PLOTTER_H
#define PLOTTER_H

#include <iostream>
#include <deque>
#include "Vector.h"

using namespace std;

class Plotter
{
    public:
        Plotter();
        void plot(deque<Vector>);
};

#endif // !PLOTTER_H