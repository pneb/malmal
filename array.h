#ifndef ARRAY_H
#define ARRAY_H

#include <iostream>
#include <algorithm>

using namespace std;

class Array {

public:
    Array(int*, int);
    Array(int);
    Array(Array&);

    int getSize();
    void print();
    void sort();
    int find(int);
    int max();
    int min();
    int count(int);
    int avg();
    void remove(int);
    void insert(int, int);
    void swap(int, int);

private:
    int* arr;
    int n;

};

#endif
