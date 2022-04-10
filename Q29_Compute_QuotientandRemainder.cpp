/* Write a program in C++ to compute quotient and remainder. 
Sample Output:
Compute quotient and remainder :
-------------------------------------
Input the dividend : 25
Input the divisor : 3
The quotient of the division is : 8
The remainder of the division is : 1 */

#include <iostream>
using namespace std;

    int main()
    {
    	int dividend, divisor, quotient,remainder;
		cout << "Compute quotient and remainder :\n";
		cout << "-------------------------------------\n";		
        cout<<" Input the dividend : ";
    	cin>>dividend;
        cout<<" Input the divisor : ";
    	cin>>divisor;
		quotient=dividend / divisor;
		remainder=dividend % divisor;
        cout<<" The quotient of the division is : "<< quotient << endl;
        cout<<" The remainder of the division is : "<< remainder;
        return 0;
    }
