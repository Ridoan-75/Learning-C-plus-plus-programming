/*
Topic 002: Dynamic array return from function
- Returning Dynamic Array: A function can safely return a pointer to a heap-allocated
  array ('new[]') because heap memory persists after the function frame exits (unlike
  local stack arrays, which become dangling pointers).
*/

#include <bits/stdc++.h>

using namespace std;

int* fun() {
    int* a = new int[5];                                      // Allocate dynamic int array of size 5 on heap
    for (int i = 0; i < 5; i++) {
        cin >> a[i];                                          // Read 5 elements into the dynamic array
    }
    return a;                                                 // Return heap pointer to caller
}

int main() {
    int* x = fun();                                           // Receive pointer to heap array returned by fun()
    for (int i = 0; i < 5; i++) {
        cout << x[i] << " ";                                  // Print each element separated by a space
    }

    return 0;
}