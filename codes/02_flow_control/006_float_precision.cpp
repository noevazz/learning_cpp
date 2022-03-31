#include <iostream>

using namespace std;

int main(void){
    // long float big_number = 1111111111111111111.111111111111111111111; // long float does not exist, use doueble instead
    float pi = 3.1416f;
    double big_number = 1111111111111111111.111111111111111111111;
    cout << pi << "     " << big_number << '\n';
    return 0;
}

/*
long modifier can be used with float.
long float is a synonym for another type named double.

double differ from the variables of type float, not only in range,
but also in accuracy.
*/