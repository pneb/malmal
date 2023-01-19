# malmal - Array Utilization Tool

malmal is a tool designed to help users utilize their arrays faster and easier. It provides a set of functions that allow users to sort, find, and manipulate arrays quickly and easily.

## Features

* Array creation: Create arrays with any size quickly and easily.
* Array manipulation: Sort, find, and manipulate arrays with just a few lines of code.
* Array removal: Remove elements from arrays quickly and easily.
* Array insertion: Insert elements into arrays quickly and easily.
* Array swapping: Swap elements in arrays quickly and easily.

## Usage
Using malmal is simple. You can create an array with any size and manipulate it easily with the functions provided.

```cpp
int arr[] = {3, 5, 12, 4, 6, 5, 3, 6, 3, 5, 4, 6, 4, 5, 3, 2, 3, 5, 3, 2};
int n = sizeof(arr) / sizeof(arr[0]);

Array a(arr, n);

a.sort();
a.find(5);
a.max();
a.min();
a.count(3);
a.avg();
a.remove(5);
a.insert(20, 1);
a.swap(1, 5);
```
