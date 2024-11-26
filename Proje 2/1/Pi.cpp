#include "Pi.h"

Pi:: Pi(const int nTerms) : n(nTerms) {}

double Pi::value() {
    double pi = 0.0;
    int sign = 1;
    for (int i = 0; i < n; ++i) {         
        pi = pi + sign * (4.0 / (2 * i + 1));
        sign = -sign;  
    }
    return pi;
}

double Pi::apprErr() {
    return fabs(value() - M_PI); 
}

void Pi::print() {
    cout << "Pi with " << n << " terms: " << value() << endl;
}