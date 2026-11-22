/*
Topic 002:  How to take input in C++, Typecasting
- cin >> var  : Reads input from standard input.
- Typecasting : Converts one data type into another, e.g., (char)y or (double)a / b.
*/

#include <iostream>
#include <string>

using namespace std;

int main() {
    int x;
    cin >> x;                      // Read an integer
    cout << x << '\n';             // Print the integer

    int y = 65;
    cout << (char)y << '\n';       // Cast int 65 to char ('A')

    double price;
    char grade;
    string name;

    cin >> price >> grade >> name; // Read double, char, and string
    cout << price << ' ' << grade << ' ' << name << '\n';

    int a = 7, b = 2;
    cout << (a / b) << '\n';       // Integer division (3)
    cout << (double)a / b << '\n'; // Float division (3.5)

    char ch = 'a';
    cout << (int)ch << '\n';       // Cast char to ASCII int (97)

    return 0;
}