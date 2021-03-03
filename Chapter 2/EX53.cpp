// Exercise 2.53: ex_02_53.cpp

#include <iostream>
using namespace std;

int main() {
    cout << "Decimal\tBinary\tOctal\tHexadecimal\n";

    for (int i = 1; i <= 256; i++) {
        cout << dec << i << "\t" <<bitset< 9 >(i) << "\t" << oct << i << "\t" << hex
             << i << endl;
    }
    return 0;
}