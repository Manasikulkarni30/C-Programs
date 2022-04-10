/* Write a program in C++ to print the area of a hexagon. 
Sample Output:
Print the area of a hexagon:
---------------------------------
Input the side of the hexagon: 6
The area of the hexagon is: 93.5307  */

#include <iostream>
#include <math.h>
using namespace std;
int main()
{
float ar,s;
    cout << "Print the area of a hexagon:\n";
	cout << "---------------------------------\n";
	cout << "Input the side of the hexagon: ";
	cin>> s;
	ar= (6*(s*s))/(4*tan(M_PI/6));
	cout<<"The area of the hexagon is: "<<ar<<"\n";

}
