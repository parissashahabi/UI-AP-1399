// Exercise 2.22: ex_02_22.cpp

#include <iostream>

using namespace std;

int main() {

    int counter = 0 ;
    int largest1 = 0 ;
    int largest2 = 0 ;

    while ( ++counter <= 10 ) {

        int number;
        cin >> number;

        if ( number > largest1 ) {
            largest1 = number;
            if ( largest1 > largest2 ) {
                number = largest2;
                largest2 = largest1;
                largest1 = number;
            }
        }
    }

    cout << "Largest numbers are " << largest1 << " and " << largest2 << endl;

    return 0;
}
