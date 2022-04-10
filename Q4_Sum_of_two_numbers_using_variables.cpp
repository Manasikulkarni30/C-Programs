/* Write a program in C++ to print the sum of two numbers using variables. 
Print the sum of two numbers :
-----------------------------------
The sum of 29 and 30 is : 59 */

#include <iostream>
using namespace std;
 
int main()
{
    cout << "Print the sum of two numbers :\n";
	cout << "-----------------------------------\n";
	int m;
	int n;
	int sum;
	m = 29;
	n = 30;
	sum = m + n;
	cout << "The sum of "<< m << " and "<< n <<" is : "<< sum;
}
