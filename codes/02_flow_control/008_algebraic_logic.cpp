#include <iostream>

using namespace std;

int main(void){
    /*
    There is a type in the C++ language whose name commemorates George Boole
        the type bool
    
    Variables of this type are able to store only two distinct values: true and false

    the bool type is only a very special variant of the int type. It’s very short (one bit).
    It behaves like an int inside expressions (true is equivalent to 1 while false is equivalent to 0).
    */
    bool developer_is_hungry = true;
    cout << "developer_is_hungry?: " << developer_is_hungry << '\n';
    if(developer_is_hungry) {
        cout << "Eat\n";
        developer_is_hungry = !developer_is_hungry;
        /*
        The exclamation mark we’ve used in the assignment is a negation operator.
        It’s a unary prefix operator that changes the logical value of its arguments
        */
    }
    cout << "developer_is_hungry?: " << developer_is_hungry << '\n';
    cout << true + 25 << '\n';
    if (1){
        cout << "one\n";
    }
    if (1995){
        cout << "1995 yeah\n";
    }
    if (-11){ // any NON-ZERO value is considered true
        cout << "-11 yeah\n";
    }
    if (0){
        cout << "zero yeah\n";
    }

    return 0;
}