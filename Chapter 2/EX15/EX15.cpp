// Exercise 2.15: ex_02_15.cpp
#include <iostream>
using namespace std;

int main() {
     int x = 1 , y , total = 0;

    while ( x <= 10 ) {
        y = x * x;
        cout << y << endl;
        total += y;
        ++x;
    }

    cout << "Total is " << total << endl;
    return 0 ;
}