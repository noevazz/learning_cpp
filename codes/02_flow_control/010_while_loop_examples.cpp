#include <iostream>

using namespace std;

int main(void){

    int counter = 10;
    while(counter--) // print 9 to 0
        cout << counter << endl; // you can ommit curly brackets if you only have one sentence for the body of the loop
    
    cout << "--------------------\n";
    counter = 10;
    while(counter) { // rember that a non-zero value is true
        cout << counter<< endl;
        counter--;
    }


    return 0;
}
