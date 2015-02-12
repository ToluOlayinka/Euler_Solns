/*Project Euler Problem 05 */
/*
 * author @fifinonz
 * https://github.com/fifinonz
 *
*/

#include <iostream>
#include <cmath>

using namespace std;
 

int greatestCommonDivisor( long int n1, long int n2 ) {
    // Euclid's algorithm
    if ( n2 == 0 ) {
        return n1;
    } else {
        return greatestCommonDivisor( n2, ( n1 % n2 ) );
    }
}

int leastCommonMultiple( long int n1, long int n2 ) {
    return ( n1 * n2 ) / greatestCommonDivisor( n1, n2 );
}

int main() {
    long int lcm = 1;

    for ( int i = 1; i <= 20; i++ ) {
        lcm = leastCommonMultiple( i, lcm );
        cout<< i<<" "<<lcm<<endl;
    }

    return 0;

}
