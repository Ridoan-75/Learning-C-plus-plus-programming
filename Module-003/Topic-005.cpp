/*
Topic 005: Return object from function
- Returning an Object by Value: A function can create a local object and return
  it by value ('Student fun()'), passing its values back to the caller.
*/

#include <bits/stdc++.h>

using namespace std;

class Student {
public:
    int roll;
    int cls;
    int gpa;

    Student(int roll, int cls, double gpa) {
        this->roll = roll;                                    // Assign roll member
        this->cls = cls;                                      // Assign cls member
        this->gpa = gpa;                                      // Assign gpa member
    }
};

Student fun() {
    Student karim(2, 5, 5.00);                                // Create local Student object
    return karim;                                             // Return object by value
}

int main() {
    Student obj = fun();                                      // Receive returned object
    cout << obj.roll << " " << obj.cls << " " << obj.gpa << endl; // Print roll, cls, and gpa
    return 0;
}