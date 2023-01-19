#include "array.h"

int main() {
    int arr[] = {3, 5, 12, 4, 6, 5, 3, 6, 3, 5, 4, 6, 4, 5, 3, 2, 3, 5, 3, 2};
    int n = sizeof(arr) / sizeof(arr[0]);

    Array a(arr, n);

    cout << "a.getSize(): " << a.getSize() << endl;
    cout << "a.print(): ";
    a.print();
    cout << "a.sort(): ";
    a.sort();
    a.print();
    cout << "a.find(5): " << a.find(5) << endl;
    cout << "a.max(): " << a.max() << endl;
    cout << "a.min(): " << a.min() << endl;
    cout << "a.count(3): " << a.count(3) << endl;
    cout << "a.avg(): " << a.avg() << endl;
    cout << "a.remove(5): ";
    a.remove(5);
    a.print();
    cout << "a.insert(20, 1): ";
    a.insert(20, 1);
    a.print();
    cout << "a.swap(1, 5): ";
    a.swap(1, 5);
    a.print();

    return 0;
}
