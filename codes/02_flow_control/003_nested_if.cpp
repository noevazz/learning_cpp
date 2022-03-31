#include <iostream>

using namespace std;

int main(void){
    float money;
    cout << "How much money do you have?: ";
    cin >> money;


    // Note curly brackets can be ommited in this example
    if (money>=100){
        if (money<=200){
            cout << "That's a pretty good amount" << '\n';
        }
        else{
            cout << "OMG you have more than 200$ you are rich!" << '\n';
        }
    }
    else{
        if (money==0){
            cout << "SAVE SOME MONEY!!!!!" << '\n';
        }
        else{
            cout << "Well at least you are not in 0" << '\n';
        }
    }



    /*
    Same code without curly brackets:

    if (money>100)
        // the next if-else is one entire block and it is considered one instruction for the outer "if"
        if (money<=200)
            cout << "That's a pretty good amount" << '\n';
        else
            cout << "OMG you have more than 200$ you are rich!" << '\n';
    else
        if (money==0)
            cout << "SAVE SOME MONEY!!!!!" << '\n';
        else
            cout << "Well at least you are not in 0" << '\n';
    */
    return 0;
}