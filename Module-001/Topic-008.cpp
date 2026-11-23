/*
Topic-008:string in c++
- std::string: Dynamic character string class in <string> (replaces fixed char arrays/C-strings; supports +, size(), indexing).
- cin.ignore(): Discards leftover characters (typically '\n') from the input buffer before getline().
- getline(cin, str): Reads an entire line including spaces until '\n' (unlike 'cin >> str', which stops at whitespace).
*/

#include <iostream>
#include <string>

using namespace std;

int main() {
    int n;
    cin >> n;                                                 // Read integer (leaves '\n' in input buffer)

    cin.ignore();                                             // Discard the leftover '\n' so getline doesn't read an empty line

    string fullLine;
    getline(cin, fullLine);                                   // Read full line including spaces
    cout << n << " -> " << fullLine << '\n';                  // Print integer and full string

    // Extra examples: string operations, concatenation, and single-word vs full-line input
    string firstName, lastName;
    cin >> firstName >> lastName;                             // Read two space-separated words without spaces inside each
    string fullName = firstName + " " + lastName;             // Concatenate strings using '+'
    cout << fullName << " (length: " << fullName.size() << ")\n"; // Print combined string and character count

    cin.ignore();                                             // Clear remaining '\n' before another getline
    string bio;
    getline(cin, bio);                                        // Read multi-word sentence with spaces
    cout << bio << '\n';

    return 0;
}