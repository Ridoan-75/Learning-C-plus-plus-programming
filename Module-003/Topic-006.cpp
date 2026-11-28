/*
- std::sort: Standard sorting function in <algorithm> (included via <bits/stdc++.h>)
  that sorts a range [start, end) in O(N log N) time using IntroSort.
- sort(a, a + n): Sorts elements in ascending order by default.
- sort(a, a + n, greater<int>()): Sorts elements in descending order using 'greater<int>()'.
*/

#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;                                                 // Read array size

    int a[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];                                          // Read n elements into array a
    }

    sort(a, a + n);                                           // Sort in ascending order (smallest to largest)
    for (int i = 0; i < n; i++) {
        cout << a[i] << " ";                                  // Print ascending sorted array
    }
    cout << '\n';

    sort(a, a + n, greater<int>());                           // Sort in descending order (largest to smallest)
    for (int i = 0; i < n; i++) {
        cout << a[i] << " ";                                  // Print descending sorted array
    }
    cout << '\n';

    return 0;
}