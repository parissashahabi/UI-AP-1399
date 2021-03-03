// Exercise 2.47: ex_02_47.cpp

#include <iostream>

using namespace std;

int main() {

    // A

    for ( int row = 1 ; row <= 10; ++row ) {
        for ( int col = 1 ; col <= row; ++col )
            cout << '*';
        cout << endl;
    }
    cout << endl;

    // B

    for ( int row = 1 ; row <= 10; ++row ) {
        for ( int col = 10 ; col >= row; --col )
            cout << '*';
        cout << endl;
    }
    cout << endl;

    // C

    for ( int row = 1 ; row <= 10; ++row ) {
        for ( int col = 1 ; col < row; ++col )
            cout << ' ';
        for ( int col = 10 ; col >= row; --col )
            cout << '*';
        cout << endl;
    }
    cout << endl;

    // D

    for ( int row = 1 ; row <= 10; ++row ) {
        for ( int col = 10 ; col > row; --col )
            cout << ' ';
        for ( int col = 1 ; col <= row; ++col )
            cout << '*';
        cout << endl;
    }

    return 0;
}