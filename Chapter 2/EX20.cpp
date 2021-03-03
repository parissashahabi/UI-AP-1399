// Exercise 2.20: ex_02_20.cpp

#include <iostream>

using namespace std;

int main() {

    int counter = 0 ;
    int largest = 0 ;

    while ( ++counter <= 10 ) {

        int number;
        cin >> number;

        if ( number > largest )
            largest = number;
    }

    cout << "Largest number is " << largest << endl;

    return 0;
}


