#ifndef SIMULATIONDISPATCHER_H
#define SIMULATIONDISPATCHER_H
#include <iostream>
#include "Simulation.h"

using std::cout;
using std::endl;


class SimulationDispatcher
{
    public:
        static void dispatch(Simulation simulation){
            simulation.run();
        }
};

#endif // !SIMULATIONDISPATCHER_H