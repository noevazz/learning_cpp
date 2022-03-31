#include <iostream>

using namespace std;

int main(void){
    float money = 26.0;
    if (money >= 10000)
        cout << "With " << money << '$' << " you can buy beer!" << '\n';
    else
        cout << "Save your money!, you only have " << money << '$' << '\n';
    /* Note you can also ommit curly branckets for the else block
       if the block will consist of only one instruction.
       It is IMPORTANT to use curly branckets to group the instructionS
       you want to execute.
       Not using curly branckets will always execute next lines because
       it means they are not part of the block. */

    return 0;
}