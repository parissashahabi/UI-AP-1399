// Exercise 2.31: ex_02_31.cpp

#include <iostream>

using namespace std;

int main() {

    int row = 0 ;

    while ( ++row <= 8 ) {

        if ( row % 2 == 0 )
            cout << ' ';

        int col{ 0 };

        while ( ++col <= 8 )
            cout << "* ";

        cout << endl;
    }

    return 0;
}