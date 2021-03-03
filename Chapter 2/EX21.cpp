// Exercise 2.21: ex_02_21.cpp

#include <iostream>

using namespace std;

int main() {

    cout << "N\t10*N\t100*N\t1000*N\n";

    int n = 0 ;

    while ( ++n <= 5 )
        cout << n << '\t' << 10 * n << '\t' << 100 * n << '\t' << 1000 * n << endl;

    return 0;
}