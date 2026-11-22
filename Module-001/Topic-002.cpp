/*
====================================================================
                  TOPIC 2: HOW TO PRINT IN C++
====================================================================

Definitions & Key Concepts:
1. std::cout (Character Output):
   - The standard output stream object defined in the <iostream> header.
   - Unlike C's printf(), it is type-safe and automatically detects the 
     data type without needing format specifiers (%d, %f, %s).

2. Insertion Operator (<<):
   - Sends data from the right-hand operand into the output stream.
   - Can be chained multiple times in a single statement.

3. std:: (Standard Namespace):
   - Prefix used to access components of the C++ Standard Library.

4. '\n' vs std::endl:
   - Both insert a newline character.
   - '\n' is preferred for better performance because std::endl also 
     forces a buffer flush, which adds overhead in loops/competitive coding.

====================================================================
*/

#include <iostream> // Header required for standard input/output streams

int main() {
    // 1. Printing a simple string literal
    std::cout << "Hello C++!\n";

    // 2. Chaining multiple data types in a single cout statement
    int age = 21;
    double cgpa = 3.85;
    char grade = 'A';

    std::cout << "Age: " << age << ", CGPA: " << cgpa << ", Grade: " << grade << '\n';

    // 3. Evaluating and printing expressions directly
    int a = 10, b = 5;
    std::cout << "Sum of a + b = " << (a + b) << '\n';

    // 4. Comparing '\n' (newline character) and std::endl (newline + flush)
    std::cout << "Line 1 using newline character" << '\n';
    std::cout << "Line 2 using std::endl" << std::endl;

    // 5. Consecutive statements without a newline print on the same line
    std::cout << "Part 1 ";
    std::cout << "Part 2\n";

    return 0; // Indicates successful program termination
}