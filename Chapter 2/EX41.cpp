// Exercise 2.41: ex_02_41.cpp

#include <iostream>
using namespace std;

double AVERAGE(double a, double b) { return (a / b); };

const int EXIT = 9999;

int main() {
    int counter = 0;
    int sum = 0;
    cin >> sum;
    // set i as input to ensure exit condition
    // increment counter as opposed i
    for (int i = 0; i != EXIT; counter++) {
        sum += i;
        cin >> i;
    }

    cout << "Average: " << AVERAGE(sum, counter) << endl;
    return 0;
}