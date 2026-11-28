/*
Topic 004: This keyword and arrow sign
- this pointer: Implicit pointer inside non-static member functions holding the address of the current object; 'this->member' resolves parameter/member name shadowing.
- Arrow operator (->): Dereferences a pointer and accesses a member in one step (ptr->member is shorthand for (*ptr).member).
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

    // Parameter names match member names -> use 'this->' to refer to object members
    Student(string name, int roll, double gpa, char grade) {
        this->name = name;                                    // Assign parameter 'name' to member 'this->name'
        this->roll = roll;                                    // Assign parameter 'roll' to member 'this->roll'
        this->gpa = gpa;                                      // Assign parameter 'gpa' to member 'this->gpa'
        this->grade = grade;                                  // Assign parameter 'grade' to member 'this->grade'
    }

    void printInfo() {
        cout << this->name << " | Roll: " << this->roll
             << " | GPA: " << this->gpa
             << " | Grade: " << this->grade << '\n';
    }
};

int main() {
    // 1. Stack object with 'this->' used inside constructor and printInfo()
    Student s1("Ridoan", 101, 3.85, 'A');
    s1.printInfo();                                           // Dot '.' on object

    // 2. Pointer to stack object using arrow operator '->'
    Student* ptr1 = &s1;
    ptr1->gpa = 3.92;                                         // Same as (*ptr1).gpa = 3.92
    cout << "Updated via -> : " << ptr1->name << " | GPA: " << ptr1->gpa << '\n';

    // 3. Heap-allocated object (dynamic object) accessed via '->'
    Student* ptr2 = new Student("Nabil", 102, 3.60, 'B');
    cout << ptr2->name << " | Roll: " << ptr2->roll
         << " | GPA: " << ptr2->gpa
         << " | Grade: " << ptr2->grade << '\n';
    ptr2->grade = 'A';                                        // Modify member on heap object using '->'
    cout << "New grade: " << ptr2->grade << '\n';

    delete ptr2;                                              // Free heap object
    ptr2 = nullptr;

    return 0;
}