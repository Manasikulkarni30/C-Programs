/* Write a program in C++ to input a single digit number and print a rectangular form of 4 columns and 6 rows. 
Sample Output:
Make a rectangular shape by a single digit number :
--------------------------------------------------------
Input the number : 5
5555
5 5
5 5
5 5
5 5
5555 */

#include <iostream>
using namespace std;

    int main()
    {
    	int x;
		cout << "Make a rectangular shape by a single digit number :\n";
		cout << "--------------------------------------------------------\n";		
        cout<<" Input the number : ";
    	cin>> x;
        cout<<" "<<x<<x<<x<<x<<endl;
        cout<<" "<<x<<" "<<" "<<x<<endl;
        cout<<" "<<x<<" "<<" "<<x<<endl;
        cout<<" "<<x<<" "<<" "<<x<<endl;
        cout<<" "<<x<<" "<<" "<<x<<endl;        
        cout<<" "<<x<<x<<x<<x;        
        return 0;
    }

