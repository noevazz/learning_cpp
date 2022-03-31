#include <iostream>

using namespace std;

int main(void){
    int number = 011;
    cout << 010 << "    " << number << '\n'; // result: 8    9
    return 0;
}
/*
 If an integer number is preceded by the 0 digit,
 it will be treated as an octal value. This means
 that the number must contain digits taken from
 the 0 to 7 range only.
*/