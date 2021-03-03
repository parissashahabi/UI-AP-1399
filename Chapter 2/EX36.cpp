// Exercise 2.36: ex_02_36.cpp

#include <iostream>

using namespace std;

int main() {

    int a, b, c;

    cout << "Three nonzero integers: ";
    cin >> a >> b >> c;

    if ( a * a == b * b + c * c )
        cout << "Right triangle!";
    else if ( b * b == a * a + c * c )
        cout << "Right triangle!";
    else if ( c * c == a * a + b * b )
        cout << "Right triangle!";

    cout << endl;

    return 0;
}