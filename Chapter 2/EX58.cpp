// Exercise 2.58: ex_02_58.cpp

#include <iostream>

using namespace std;

int main() {
    // i = rows, j = diamonds, k = spaces
    for (int i = 1, j = 1, k = 4; i <= 9; i++) {
        for (int s = 0; s < k; s++) {
            cout << " ";
        }
        for (int d = 0; d < j; d++) {
            cout << "*";
        }

        (i >= 5) ? j -= 2 : j += 2;
        (i >= 5) ? k++ : k--;

        cout << endl;
    }
    return 0;
}