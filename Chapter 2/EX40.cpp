// Exercise 2.40: ex_02_40.cpp

#include <iostream>
using namespace std;

int main( ) {
    int limit, num, total = 0;

    cin >> limit;

    for (int i = 1; i <= limit; i++) {
        cin >> num;
        total += num;
    }

    cout << "Total = " << total << endl;
    return 0;
}