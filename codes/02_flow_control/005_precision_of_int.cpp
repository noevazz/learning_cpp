#include <iostream>

using namespace std;

int main(void){
    long ants; // same as long int ants;
    short counter; // same as short int counter;
    unsigned positive; // same as unsigned int positive;

    unsigned long big_number; // same as unsigned long int big_number;
    unsigned short lambs; // same as unsigned short int lambs;

    unsigned char little_counter;
    return 0;
}

/*
Most of the computers currently in use store ints
using 32 bits (4 bytes); this means that we can
operate the ints within the range of
[-2147483648 .. 2147483647].

C++ provides some methods for defining precisely
how we intend to store large/small numbers:

    • long – is used to declare that we need a
    wider range of ints than the standard one.
    64 bits, it can be used to store numbers
    from the range of
    -9223372036854775808 .. 9223372036854775807

    • short – is used to determine that we need
    a narrower range of ints than the standard
    one. It is 16 bits, in this case, the range
    of the variable will be suppressed to the
    range of [-32768 to 32767].

    • unsigned – used to declare that a variable
    will be used only for non-negative numbers;
    this might surprise you, but we can use this
    modifier together with the type char.
    You can combine unsigned with short and long:
        unasigned long (int is optional here) number
        unasigned short (int is optional here) number
    If we treat the char variable as a signed integer
    number, its range would be [-128 .. 127]. If we
    don’t need any signed value (as in the example
    below), its range shifts to [0 .. 255]


The word int may be omitted as all the declarations
are considered to be specifying int by default.
*/