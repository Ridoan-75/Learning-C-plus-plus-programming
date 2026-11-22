/*
Topic-005:If else and Ternary Operator

- EOF (End of File): 'while (cin >> x)' keeps reading until end-of-file (Ctrl+Z on Windows,
  Ctrl+D on Linux/macOS) or invalid input occurs.
- if / else: Executes code blocks conditionally based on a boolean condition.
- Ternary Operator (? :): Shorthand for simple if-else -> (condition) ? expr_if_true : expr_if_false;
*/

#include <iostream>

using namespace std;

int main() {
    int x;
    while (cin >> x) {                                    // Read integers until EOF
        std::cout << x << std::endl;                      // Print the input integer

        // Check even or odd using if-else
        if (x % 2 == 0) {
            cout << x << " is Even\n";
        } else {
            cout << x << " is Odd\n";
        }

        // Check positive, negative, or zero using ternary operator
        cout << (x > 0 ? "Positive" : (x < 0 ? "Negative" : "Zero")) << '\n';
    }

    return 0;
}