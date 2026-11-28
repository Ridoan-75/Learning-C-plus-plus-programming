/*
Topic 003: Constructor and its simulation
- Constructor: Special member function with the exact same name as the class and
  no return type; runs automatically when an object is created to initialize data.
- Common Constructor Errors: Missing default constructor when one is needed,
  mismatched arguments/order, putting a return type by mistake, or accessing a
  private constructor outside the class.
*/

#include <iostream>
#include <string>

using namespace std;

class Student {
public:
    string name;
    int roll;
    double gpa;
    char grade;

    // Parameterized constructor: initializes members when object is created
    Student(string n, int r, double g, char gr) {
        name = n;                                             // Assign name
        roll = r;                                             // Assign roll
        gpa = g;                                              // Assign gpa
        grade = gr;                                           // Assign grade
    }

    // Default constructor: needed if you also write 'Student s;' with no arguments
    Student() {
        name = "Unknown";
        roll = 0;
        gpa = 0.0;
        grade = 'N';
    }
};

int main() {
    Student s1("Ridoan", 101, 3.85, 'A');                     // Valid: matches parameterized constructor
    Student s2("Nabil", 102, 3.50, 'B');                      // Valid: second object with own values
    Student s3;                                               // Valid only because Student() default constructor exists

    cout << s1.name << " | " << s1.roll << " | " << s1.gpa << " | " << s1.grade << '\n';
    cout << s2.name << " | " << s2.roll << " | " << s2.gpa << " | " << s2.grade << '\n';
    cout << s3.name << " | " << s3.roll << " | " << s3.gpa << " | " << s3.grade << '\n';

    // Common errors (keep commented so code compiles):
    // Student err1;                                          // Error: no matching constructor if parameterized exists without default
    // Student err2("Ridoan", 101);                           // Error: missing arguments / wrong parameter count
    // Student err3(101, "Ridoan", 3.85, 'A');                  // Error: wrong argument order/type
    // void Student() {}                                      // Error: constructors cannot have a return type

    return 0;
}