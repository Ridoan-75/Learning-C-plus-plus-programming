/*
====================================================================
                  C++ SETUP GUIDE (Windows + VS Code)
====================================================================

1. MinGW-te g++ Check & Setup:
   - Terminal / Git Bash open kore check koro g++ ache kina:
     $ g++ --version

   - Jodi version dekhay, tahole already ready!
   - Jodi 'command not found' bole, tahole MinGW Installation Manager 
     theke 'mingw32-gcc-g++' install koro (ba MSYS2 use korle:
     'pacman -S mingw-w64-x86_64-gcc') ebong 'bin' folder-er path 
     Windows Environment Variables -> Path-e add kore dao.

2. VS Code Quick Setup:
   - Extensions tab-e giye 'C/C++' (by Microsoft) install koro.
   - Code formatting neat rakhar jonno 'Clang-Format' / C_Cpp formatter 
     active rakho.

3. Compile & Run Command (Git Bash / Terminal):
   - Compile: g++ -std=c++17 -Wall -Wextra hello.cpp -o hello
   - Run:     ./hello

   [Flags Explanation]
   -std=c++17  -> Modern C++17 standard enable kore
   -Wall       -> Common warning gulo dekhay
   -Wextra     -> Aro extra helpful warning dekhay
   -o hello    -> Output file-er naam 'hello.exe' set kore

====================================================================
                     FIRST C++ STARTER CODE
====================================================================
*/

#include <iostream> // Console input (cin) ebong output (cout) use korar jonno header file

int main() {
    // 'std::cout' diye screen-e text print kora hoy (C-er printf-er moto)
    // '<<' ke insertion operator bole
    // '\n' diye notun line toiri kora hoy
    std::cout << "Assalamu Alaikum! C++ journey shuru holo.\n";

    // Program kono error chara successfully sesh hoise ta OS-ke janay
    return 0; 
}