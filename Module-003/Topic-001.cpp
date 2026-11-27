/*
Topic-001: What is class and object
- Class: User-defined blueprint/template grouping data members (attributes) and member functions (methods).
- Object: Concrete instance of a class created in memory with its own state/values.
*/

#include <iostream>
#include <string>

using namespace std;

class Student {
public:
    string name;                                              // Student name (attribute)
    int roll;                                                 // Roll number (attribute)
    double gpa;                                               // GPA score (attribute)
    char section;                                             // Section character (attribute)

    void printInfo() {                                        // Member function to display student details
        cout << name << " | Roll: " << roll
             << " | GPA: " << gpa
             << " | Sec: " << section << '\n';
    }
};

int main() {
    Student s1;                                               // Create object s1 of class Student
    s1.name = "Ridoan";                                       // Set string attribute
    s1.roll = 101;                                            // Set int attribute
    s1.gpa = 3.85;                                            // Set double attribute
    s1.section = 'A';                                         // Set char attribute
    s1.printInfo();                                           // Call member function on s1

    Student s2;                                               // Create second independent object s2
    s2.name = "Nabil";
    s2.roll = 102;
    s2.gpa = 3.60;
    s2.section = 'B';
    s2.printInfo();                                           // Call member function on s2

    return 0;
}