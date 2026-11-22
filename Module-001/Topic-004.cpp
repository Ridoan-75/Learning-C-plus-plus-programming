/*
Topic-004:EOF and Setprecision in C++
- EOF (End of File): In C++, 'while (cin >> x)' loops until input ends (EOF) or fails;
  in terminal, press Ctrl+Z (Windows) or Ctrl+D (Linux/macOS) to send EOF.
- Setprecision: '<iomanip>' with 'fixed' and 'setprecision(n)' controls decimal places.
*/

#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    int x;
    while (cin >> x) {                                 // Loop until EOF or invalid input
        cout << x << '\n';                            // Print each integer followed by newline
    }

    double val = 12.3456789;
    cout << val << '\n';                              // Default precision (6 significant digits)
    cout << fixed << setprecision(2) << val << '\n';  // Fixed notation with 2 decimal places (12.35)
    cout << setprecision(4) << val << '\n';           // Update to 4 decimal places (12.3457)

    return 0;
}