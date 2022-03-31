#include <iostream>

using namespace std;

int main(void){
    int counter = 10;
    while (counter>0){ // the block inside this while loop will be executed until the expresion is false
        cout << counter << '\n';
        cout << '\n'; // add all the stataments that you want
        counter--;
        // the expresion in the while loop is evaluated in each repetition (iteration),
        // if the expresion is true then the block will be executed again
    }
    
    //while(true){cout << "This is dangerous, it will print this text for ever!!";}

    int number = 26;
    while (number>100){ // This expresion is false from the begining, it means the while loop will never execute
        cout << "Hello\n";
    } // same as while (false){cout << "this will never execute\n";}

    return 0;
}