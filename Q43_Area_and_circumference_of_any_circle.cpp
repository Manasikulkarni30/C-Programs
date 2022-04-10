 /* Write a language program which accepts the radius of a circle from the user and compute the area and circumference. 
Sample Output:
Find the area and circumference of any circle :
----------------------------------------------------
Input the radius(1/2 of diameter) of a circle : 5
The area of the circle is : 78.5397
The circumference of the circle is : 31.4159  */

#include <iostream>
#define PI 3.14159
using namespace std;

    int main()
    {
    	float radius, area, circum;
		cout << "Find the area and circumference of any circle :\n";
		cout << "----------------------------------------------------\n";		
        cout<<" Input the radius(1/2 of diameter) of a circle : ";
    	cin>>radius;
	
		circum = 2*PI*radius;
		area = PI*(radius*radius);
        cout<<" The area of the circle is : "<< area << endl;
        cout<<" The circumference of the circle is : "<< circum;		
        return 0;
    }

