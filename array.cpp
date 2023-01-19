#include "array.h"
#include <numeric>

Array::Array(int* arr, int n) {
    this->arr = arr;
    this->n = n;
}

Array::Array(int n) {
    this->n = n;
    this->arr = new int[n];
}

Array::Array(Array& a) {
    this->arr = a.arr;
    this->n = a.n;
}

int Array::getSize() {
    return n;
}

void Array::print() {
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void Array::sort() {
    std::sort(arr, arr + n);
}

int Array::find(int num) {
    return std::find(arr, arr + n, num) - arr;
}

int Array::max() {
    return *max_element(arr, arr + n);
}

int Array::min() {
    return *min_element(arr, arr + n);
}

int Array::count(int num) {
    return std::count(arr, arr + n, num);
}

int Array::avg() {
    return accumulate(arr, arr + n, 0) / n;
}

void Array::remove(int num) {
    for (int i = 0; i < n; i++) {
        if (arr[i] == num) {
            for (int j = i; j < n - 1; j++) {
                arr[j] = arr[j + 1];
            }
            arr[n - 1] = NULL;
            n--;
        }
    }
}

void Array::insert(int num, int pos) {
    if (pos >= n) {
        arr[n] = num;
    }
    else {
        for (int i = n; i > pos; i--) {
            arr[i] = arr[i - 1];
        }
        arr[pos] = num;
    }
    n++;
}

void Array::swap(int pos1, int pos2) {
    int temp = arr[pos1];
    arr[pos1] = arr[pos2];
    arr[pos2] = temp;
}
