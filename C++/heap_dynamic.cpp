#include <iostream>
using namespace std;
int main() {
    int capacity = 2;
    int* arr = new int[capacity];
    int size = 0;
    int val;
    while (cin >> val) {
        if (size == capacity) {
            capacity *= 2;
            int* newArr = new int[capacity];
            for (int i = 0; i < size; ++i)
                newArr[i] = arr[i];
            delete[] arr;
            arr = newArr;
        }
        arr[size++] = val;
    }
    for (int i = 0; i < size; ++i)
        cout << arr[i] << " ";
    delete[] arr;
    return 0;
}