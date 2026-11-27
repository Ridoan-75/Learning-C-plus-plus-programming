/*
Topic 002: Declaring class and object
- Class declaration: Define 'class ClassName { public: ... };' with a semicolon at the end.
- Object declaration: Create an instance using 'ClassName obj;' (dot '.' accesses members).
*/

#include <iostream>
#include <string>

using namespace std;

class Book {                                                  // Declare class named Book
public:                                                       // Access specifier so members are accessible outside class
    string title;                                             // String member variable
    int pages;                                                // Int member variable
    double price;                                             // Double member variable
    char rating;                                              // Char member variable
};                                                            // Semicolon required at the end of class definition

int main() {
    Book b1;                                                  // Declare object b1 of type Book
    b1.title = "C++ Basics";                                  // Set string member using dot operator
    b1.pages = 250;                                           // Set int member
    b1.price = 19.99;                                         // Set double member
    b1.rating = 'A';                                          // Set char member

    Book b2;                                                  // Declare second object b2
    b2.title = "DSA Notes";                                   // Set b2 title
    b2.pages = 320;                                           // Set b2 pages
    b2.price = 24.50;                                         // Set b2 price
    b2.rating = 'B';                                          // Set b2 rating

    cout << b1.title << " | " << b1.pages << " | " << b1.price << " | " << b1.rating << '\n'; // Print b1 data
    cout << b2.title << " | " << b2.pages << " | " << b2.price << " | " << b2.rating << '\n'; // Print b2 data

    return 0;
}