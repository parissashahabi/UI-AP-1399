// Exercise 1.32: ex_01_32.cpp

#include <iostream>

using namespace std;

int main() {

    int n1, n2;

    cout << "Two integer numbers: ";
    cin >> n1 >> n2;

    if ( n1 % n2 == 0 ) cout << n1 << " is a multiplication of " << n2 << endl;
    else cout << n1 << " is NOT a multiplication of " << n2 << endl;

    return 0;
}