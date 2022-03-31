#include <iostream>

using namespace std;

int main(void){
    do
        cout << "I will always execute the body because the condition is checked at the end of the body execution\n";
    while(false);

    cout << "----------------------\n";

    int counter = 10;
    do{
        cout << counter << '\n';
        counter--;
        // add as many statements as you want to the body
    } while (counter >0);

    /*
    KEY TAKEAWAYS
        The condition is checked at the end of the body execution,
        The loop's body is executed at least once, even if the condition is not met.

    */

    return 0;
}