/*
Topic-007:Min, max, swap
- min(a, b) / max(a, b): Defined in <algorithm>; returns the smaller or larger of two values (also supports initializer lists like min({1, 2, 3})).
- swap(a, b): Defined in <algorithm> (and <utility>); exchanges the values of two variables in place without needing a temporary variable.
*/

#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int a, b;
    cin >> a >> b;                                            // Read two integers

    cout << "Max: " << max(a, b) << '\n';                      // Print larger value between a and b
    cout << "Min: " << min(a, b) << '\n';                      // Print smaller value between a and b

    swap(a, b);                                               // Swap values of a and b in place
    cout << "After swap: " << a << " " << b << '\n';          // Print swapped integers

    // Extra examples: initializer list & other data types (double, char)
    cout << "Max of 3: " << max({a, b, 100}) << '\n';         // Compare three values using initializer list
    cout << "Min of 3: " << min({a, b, 0}) << '\n';           // Find minimum among three values

    double x = 4.5, y = 9.2;
    swap(x, y);                                               // Swap two double values
    cout << "Swapped doubles: " << x << " " << y << '\n';

    char c1 = 'A', c2 = 'Z';
    swap(c1, c2);                                             // Swap two char values
    cout << "Swapped chars: " << c1 << " " << c2 << '\n';

    return 0;
}