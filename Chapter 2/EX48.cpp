// Exercise 2.48: ex_02_48.cpp

#include <iostream>

using namespace std;

int main() {

    for ( int n = 1 ; n <= 5; ++n ) {

        int number;
        cin >> number;

        if ( number < 1 || 30 < number ) {
            cout << "Number " << number << " is out of range!\n";
            continue;
        }
        for ( int pos = 1 ; pos <= number; ++pos )
            cout << "*";

        cout << endl;
    }

    return 0;
}