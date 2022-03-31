#include <iostream>

using namespace std;

int main(void) {
   cout << "HEllO C++ WORLD!" << endl;
   return 0;
}
/*
                        Avoid endl
Reason: The endl manipulator is mostly equivalent to '\n' and "\n";
as most commonly used it simply slows down output by doing redundant
flush()s. This slowdown can be significant compared to printf-style
output. Example

cout << "Hello, World!" << endl;// two output operations and a flush
cout << "Hello, World!\n";      // one output operation and no flush

Note
For cin/cout (and equivalent) interaction, there is no reason to
flush; that’s done automatically. For writing to a file, there is
rarely a need to flush. Note

Apart from the (occasionally important) issue of performance, the
choice between '\n' and endl is almost completely aesthetic.

Reference: https://isocpp.github.io/CppCoreGuidelines/CppCoreGuidelines#Rio-endl
*/