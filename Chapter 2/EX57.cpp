// Exercise 2.57: ex_02_57.cpp

#include <iostream>

using namespace std;

int main() {

    int a,b,x,y,i,j,g;

    if ( !( x < 5 && y >= 7 ) == ( !( x < 5 ) || !( y >= 7 ) ) )
        cout << true;

    if ( !( i > 4 || j <= 6 ) == ( !( i > 4 ) && !( j <= 6 ) ) )
        cout << true;

    if ( ( !( x <= 8 ) && !( y > 4 ) ) == !( x <= 8 || y > 4 ) )
        cout << true;

    if ( ( !( a == b ) || !( g != 5 ) ) == !( a == b && g != 5 ) )
        cout << true;

    return 0;
}