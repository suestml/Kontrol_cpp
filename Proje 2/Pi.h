#ifndef PI_H
#define PI_H

#include <iostream>
#include <cmath>
using namespace std;

class Pi
{
    public:
        Pi (const int nTerms);
        double apprErr();
        void print(); 
    private:
        int n;
        double value();
};
 
#endif