// Exercise 2.35: ex_02_35.cpp

#include <iostream>

using namespace std;

int main() {

    double a, b, c;

    cout << "Three nonzero values: ";
    cin >> a >> b >> c;

    if ( a + b > c )
        if ( b + c > a )
            if ( c + a > b )
                cout << "Triangle!" << endl;

    return 0;
}