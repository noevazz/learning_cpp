#include <iostream>

using namespace std;

int main(void){
    float money = 26.0;
    if (money >= 20){
        cout << "With " << money << '$' << " you can buy beer!" << '\n';
    }

    /* If the statemnt will only contain one single instruction
       then curly brackets can be ommited: */
    money = 3;
    if (money < 20)
        cout << "Save your money!, you only have " << money << '$' << endl;
    /* If you have more instructions after line above,
       those lines will execute regardles of the if statement is true or false */


    return 0;
}