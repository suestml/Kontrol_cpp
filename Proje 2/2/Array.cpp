#include "Array.h"

Array::Array() { //a1
    size = 1;
    data = new int[size];
    data[0] = 0;
}

Array::Array(const int SIZE, const int val) { //a2
    size = SIZE;
    data = new int[size];
    for (int i = 0; i < size; ++i) {
        data[i] = val;
    }
}

Array::Array(const int SIZE, const int* arr) { //a3
    size = SIZE;
    data = new int[size];
    for (int i = 0; i < size; ++i) {
        data[i] = arr[i];
    }
}

Array::Array(const Array& src_Arr) { //a4
    size = src_Arr.size;
    data = new int[size];
    for (int i = 0; i < size; ++i) {
        data[i] = src_Arr.data[i];
    }
}

void Array::add(const Array& src_Arr) {
    if (size == src_Arr.size) {
        for (int i = 0; i < size; ++i) {
            data[i] += src_Arr.data[i];
        }
    }
}

void Array::subtract(const Array& src_Arr) {
    if (size == src_Arr.size) {
        for (int i = 0; i < size; ++i) {
            data[i] -= src_Arr.data[i];
        }
    }
}

void Array::multiply(const Array& src_Arr) {
    if (size == src_Arr.size) {
        for (int i = 0; i < size; ++i) {
            data[i] *= src_Arr.data[i];
        }
    }
}

int Array::product(const Array& src_Arr) {
    int prod = 0;
    if (size == src_Arr.size) {
        for (int i = 0; i < size; ++i) {
            prod += data[i] * src_Arr.data[i];
        }
    }
    return prod;
}

void Array::copy(const Array& other) {
    delete[] data;
    size = other.size;
    data = new int[size];
    for (int i = 0; i < size; ++i) {
        data[i] = other.data[i];
    }
}

int Array::getSize() {
    return size;
}

int* Array::getData() {
    return data;
}

void Array::fill(const int value) {
    for (int i = 0; i < size; ++i) {
        data[i] = value;
    }
}

void Array::print() {
    cout << "{";
    for (int i = 0; i < size; ++i) {
        cout << data[i];
        if (i < size - 1) cout << ", ";
    }
    cout << "}" << endl;
}