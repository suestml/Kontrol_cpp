#ifndef ARRAY_H
#define ARRAY_H
#include <iostream>

using namespace std;

class Array 
{ 
    public: 
        Array();
        Array(const int SIZE, const int val);
        Array(const int SIZE, const int* arr); 
        Array(const Array& src_Arr);

        void add(const Array& src_Arr); 
        void subtract(const Array& src_Arr); 
        void multiply (const Array& src_Arr); 
        
        int product(const Array& src_Arr); 
        
        void copy(const Array& rhs_Arr); 
        
        int getSize(); 
        int* getData(); 

        void fill(const int value);          
        void print(); 
        
    private: 
        int* data; 
        int size; 
};

#endif 