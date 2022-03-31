#include <iostream>

using namespace std;

int main(void){
    int year = 1995;
    float pi = 3.1416f;
    // We must add the suffix f or F at the end of a float value.
    // This is because the compiler interprets decimal values
    // without the suffix as double (another type)
    
    
    cout << pi << "     " << year << '\n';
    return 0;
}

/*
float (floating-point) numbers contain fractional part.
Valid values for a float number:
    85.3
    143.
    143.0
    .42
    0.42
The point (.) makes the float.


For int (integer) numbers you cannot use commas, spaces,
dots to improve the readability,:
111,111,111
111.111.111
111 111 111
^ These are NOOOOOT valid.

The only valid notation for int is:
111111111

Also note c++ is case sensitive, Int, INT, iNt, etc.
is not the same as int, same for FLOAT, fLoAt, etc.
*/
