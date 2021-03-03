// Exercise 2.33: ex_02_33.cpp

#include <iostream>

using namespace std;

int main() {

    float r;

    cin >> r;

    cout << "\nDiameter is " << 2 * r
         << "\nPerimeter is " << 2 * 3.14159 * r
         << "\nArea is " << 3.14159 * r * r << endl;

    return 0;
}