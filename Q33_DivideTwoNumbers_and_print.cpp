/* Write a program in C++ to divide two numbers and print on the screen. 
Sample Output:
Divide two numbers and print:
----------------------------------
The quotient of 30 and 10 is : 3 */

#include <iostream>
using namespace std;
 
int main()
{
    cout << "Divide two numbers and print:\n";
	cout << "----------------------------------\n";
	int a;
	int b;
	int resdiv;
	a=30;
	b=10;
	resdiv=a/b;
	cout << " The quotient of "<< a << " and "<<b <<" is : "<< resdiv;
}
