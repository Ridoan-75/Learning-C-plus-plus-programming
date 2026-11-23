/*
Topic-006: Switch Case in c++
- switch: Selects one of many code blocks to execute based on an integral or enum expression.
- break: Exits the switch block immediately; omitting it causes execution to "fall through" to the next case.
- default: Optional fallback block that runs when no case matches the expression.
*/

#include <iostream>

using namespace std;

int main() {
    // 1. Day lookup (note: case 2 has no break, so input 2 prints both "Sunday" and "Monday")
    int day;
    cin >> day;                                               // Read day number
    switch (day) {
        case 1:
            cout << "Saturday\n";
            break;
        case 2:
            cout << "Sunday\n";                               // Intentional fall-through to case 3
        case 3:
            cout << "Monday\n";
            break;
        default:
            cout << "Invalid day\n";
    }

    // 2. Even or odd check using expression inside switch
    int x;
    cin >> x;                                                 // Read integer
    switch (x % 2) {                                          // Evaluate remainder (0 or 1)
        case 0:
            cout << "Even\n";
            break;
        case 1:
            cout << "Odd\n";
            break;
    }

    // 3. Vowel check using char cases and default fallback
    char c;
    cin >> c;                                                 // Read single character
    switch (c) {
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':                                             // Grouped cases share the same vowel logic
            cout << "Vowel\n";
            break;
        default:
            cout << "Not Vowel\n";                            // Runs if c is not a lowercase vowel
    }

    return 0;
}