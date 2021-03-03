// Exercise 2.16: ex_02_16.cpp

#include <iomanip>
#include <iostream>

using namespace std;

int main() {

    float mile;
    float gallon;
    float miles_total = 0 ;
    float gallons_total = 0 ;

    cout << setprecision( 6 ) << fixed;

    while ( true) {

        cout << "Enter the gallons used ( -1 to end ): ";
        cin >> gallon;

        if( gallon == -1 )
            break;

        cout << "Enter the miles driven: ";
        cin >> mile;

        miles_total += mile;
        gallons_total += gallon;

        cout << "The miles / gallo for this tank was " << 1.0 * mile / gallon << endl;
    }

    cout << "The overall average miles/gallon was " << 1.0 * miles_total / gallons_total << endl;
    return 0;
}