#include <iostream>
using namespace std;
int main() {
    int n;
    cin >> n;
    int arr[n]; // VLA, compiler-dependent
    for (int i = 0; i < n; ++i)
        arr[i] = i;
    for (int i = 0; i < n; ++i)
        cout << arr[i] << " ";
    return 0;
}