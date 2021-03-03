// Exercise 2.45: ex_02_45.cpp

#include <iostream>

using namespace std;

int main() {

    long nFact = 1 ;

    for ( int n = 1 ; n <= 20; ++n ) {
        nFact *= n;
        cout << n << "!\t" << nFact << endl;
    }

    return 0;
}