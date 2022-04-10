/* Write a program in C++ to check whether a number is positive, negative or zero. 
Sample Output:
Check whether a number is positive, negative or zero :
-----------------------------------------------------------
Input a number : 8
The entered number is positive. */

#include <iostream>
using namespace std;
int main()
{
    long num1 = 0;
	cout << "Check whether a number is positive, negative or zero :\n";
	cout << "-----------------------------------------------------------\n";  
	cout << " Input a number : ";
    cin >> num1;
    if(num1 > 0)
    {
        cout << " The entered number is positive.\n";
    }
    else if(num1 < 0)
    {
        cout << " The entered number is negative.\n";
    }
    else
    {
        cout << " The number is zero.\n\n";
    }
    return 0;
}
