// Exercise 2.59: ex_02_59.cpp

#include <iostream>

using namespace std;

int main() {
    int rows = 0;
    cin >> rows;

    // i = rows, j = diamonds, k = spaces
    for (int i = 1, j = 1, k = rows / 2; i <= rows; i++) {
        for (int s = 0; s < k; s++) {
            cout << " ";
        }
        for (int d = 0; d < j; d++) {
            cout << "*";
        }

        (i > rows / 2) ? j -= 2 : j += 2;
        (i > rows / 2) ? k++ : k--;

        cout << endl;
    }
    return 0;
}