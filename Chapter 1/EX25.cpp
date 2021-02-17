// Exercise 1.25: ex_01_25.cpp

#include <iostream>

using namespace std;

int isLarger(int a, int b) {
    return a>b ? a : b;
    // (condition) ? true : false;
}

int main() {

    int number1, number2;

    cout << "Two numbers: ";
    cin >> number1 >> number2;

    if ( number1 == number2 )
        cout << "These numbers are equal.\n";

    else
        cout<<isLarger(number1,number2)<<" is larger."<<endl;

    return 0;
}

