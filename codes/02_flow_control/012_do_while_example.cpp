#include <iostream>

using namespace std;

int main(void){
    int number;
    int max = -100000;
    int counter = 0;
    do {
        cin >> number;
        if (number != -1)
            counter++;
        if (number > max)
            max = number;
    } while (number != -1);
    
    if (counter)
        cout << "The largest number is " << max << '\n';
    else
        cout << "Are you kidding? You haven't entered any number!" << '\n';

  return 0;
}