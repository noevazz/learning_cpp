#include <iostream>

using namespace std;

int main(void){
    // Computer addition is NOT always commutative
    double big_num = 11111111000.0;
    double small_num = 0.00011111111;
    cout << big_num + small_num << '\n';
    // as the result. The lower value simply vanished without a trace.


    // The phenomenon described here is what we call a numerical anomaly.
    return 0;
}