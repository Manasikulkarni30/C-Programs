/* Write a program in C++ to find the area of Scalene Triangle. 
Sample Output:
Find the area of Scalene Triangle :
----------------------------------------
Input the length of a side of the triangle : 5
Input the length of another side of the triangle : 6
Input the angle between these sides of the triangle : 6
The area of the Scalene Triangle is : 1.56793 */

#include <iostream>
#include <math.h>
#define PI 3.14159
using namespace std;

    int main()
    {
    	float side1, side2, ang1, area;
		cout << "Find the area of Scalene Triangle :\n";
		cout << "----------------------------------------\n";		
        cout<<" Input the length of a side  of the triangle : ";
    	cin>>side1;
        cout<<" Input the length of another side  of the triangle : ";
    	cin>>side2;
        cout<<" Input the angle between these sides of the triangle : ";
    	cin>>ang1;	
		area = (side1 * side2 * sin((PI/180)*ang1))/2;
        cout<<" The area of the Scalene Triangle is : "<< area;
        return 0;
    }
