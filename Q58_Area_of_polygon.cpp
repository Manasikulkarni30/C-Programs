/*  Write a program in C++ to print the area of a polygon. 
Sample Output:
Print the area of a polygon:
---------------------------------
Input the number of sides of the polygon: 7
Input the length of each side of the polygon: 6
The area of the polygon is: 130.821   */

#include <iostream>
#include <math.h>
using namespace std; 
int main()
{
float ar,s,n;
    cout << "Print the area of a polygon:\n";
	cout << "---------------------------------\n";
	cout << "Input the number of sides of the polygon: ";
	cin>> n;
	cout << "Input the length of each side of the polygon: ";
	cin>> s;	
	ar= (n * (s * s)) / (4.0 * tan((M_PI / n)));
	cout<<" The area of the ploygon is: "<<ar<<"\n";

}
