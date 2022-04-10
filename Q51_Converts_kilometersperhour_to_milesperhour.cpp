/* Write a program in C++ that converts kilometers per hour to miles per hour. 
Sample Output:
Convert kilometers per hour to miles per hour :
----------------------------------------------------
Input the distance in kilometer : 5
The 5 Km./hr. means 3.10686 Miles/hr. */

#include<iostream>
using namespace std;

int main()
{
    float kmph, miph;
	cout << "Convert kilometers per hour to miles per hour :\n";
	cout << "----------------------------------------------------\n";	
    cout << " Input the distance in kilometer : ";
    cin >> kmph;
	miph = (kmph * 0.6213712); 
    cout << " The "<< kmph <<" Km./hr. means "<< miph << " Miles/hr.";
    return 0;
}
