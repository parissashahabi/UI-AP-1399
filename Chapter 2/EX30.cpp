
// Exercise 2.30: ex_02_30.cpp

#include <iostream>

using namespace std;

int main() {

    int binary;
    int decimal = 0 ;
    int value = 1 ;

    cout << "Binary number: ";
    cin >> binary;

    while ( binary ) {
        decimal += binary % 10 * value;
        value *= 2;
        binary /= 10;
    }

    cout << "Decimal equivalent is " << decimal << endl;

    return 0;
}