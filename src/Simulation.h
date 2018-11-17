#ifndef SIMULATION_H
#define SIMULATION_H

#include <string>
using std::string;

class Simulation
{
    public:
        void run();

        void setLabel(string);
        string getLabel();
        
    private:
        string label;
};

#endif // !SIMULATION_H