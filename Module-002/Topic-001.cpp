/*
Topic-001: Dynamic Array
- Dynamic Array: Heap-allocated array created at runtime using 'new Type[size]'.
- delete[] ptr: Frees heap memory allocated with 'new[]'.
*/

#include <bits/stdc++.h>

using namespace std;

int main() {
    // int a[5]; -> static array (fixed size on stack)
    int* a = new int[5];                                      // Allocate dynamic int array of size 5 on heap

    for (int i = 0; i < 5; i++) {
        cin >> a[i];                                          // Read 5 elements into the dynamic array
    }

    for (int i = 0; i < 5; i++) {
        cout << a[i] << " ";                                  // Print each element separated by a space
    }

    return 0;
}