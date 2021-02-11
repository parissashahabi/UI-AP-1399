// Exercise 1.36: ex_01_36.cpp

#include <iostream>

using namespace std;

int main() {

    int number;

    cout << "Five-digit integer: ";
    cin >> number;

    cout << number % 100000 / 10000<< "  "
         << number % 10000 / 1000<< "  "
         << number % 1000 / 100 << "  "
         << number % 100 / 10 << "  "
         << number % 10 << endl;

    return 0;
}