#include <iostream>

using namespace std;

int main(void){
    float money;
    cout << "How much money do you have?: ";
    cin >> money;
    
    /*
    Original code:
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
    */


    // Using cascading if-else:
    if (money==0){
        cout << "SAVE SOME MONEY!!!!!" << '\n';
    }
    else if (money<100){
        cout << "Well at least you are not in 0" << '\n';
    }
    else if (money<=200){
        cout << "That's a pretty good amount" << '\n';
    }
    else{
        cout << "OMG you have more than 200$ you are rich!" << '\n';
    }

   
    return 0;
}