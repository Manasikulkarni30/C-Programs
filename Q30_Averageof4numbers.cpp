/* Write a program in C++ to compute the total and average of four numbers. 
Sample Output:
Compute the total and average of four numbers :
----------------------------------------------------
Input 1st two numbers (separated by space) : 25 20
Input last two numbers (separated by space) : 15 25
The total of four numbers is : 85
The average of four numbers is : 21.25 */

#include <iostream>
using namespace std;

    int main()
    {
    	float num1,num2,num3,num4,total,average;
		cout << "Compute the total and average of four numbers :\n";
		cout << "----------------------------------------------------\n";		
        cout<<" Input 1st two numbers (separated by space) : ";
    	cin>> num1 >> num2;
        cout<<" Input last two numbers (separated by space) : ";
    	cin>> num3 >> num4;
    	total = num1 + num2 + num3 + num4;
		average = total/4;
        cout<<" The total of four numbers is : "<< total << endl;
        cout<<" The average of four numbers is : "<< average;
        return 0;
    }

