/* Write a program in C++ to print the area and perimeter of a rectangle. 
Sample Output:
Print the area and perimeter of a rectangle:
----------------------------------------------
Input the width of the rectangle: 8.5
Input the height of the rectangle: 5.6
The area of the rectangle is: 47.6
The perimeter of the rectangle is: 28.2  */

#include <iostream>
using namespace std;

    int main()
    {
    	float width, lngth, area, peri;
		cout << "Find the Area and Perimeter of a Rectangle :\n";
		cout << "-------------------------------------------------\n";		
        cout<<" Input the length of the rectangle : ";
    	cin>>lngth;
		cout<<" Input the width of the rectangle : ";
    	cin>>width;
    	area=(lngth*width);
		peri=2*(lngth+width);
        cout<<" The area of the rectangle is : "<< area << endl;
        cout<<" The perimeter of the rectangle is : "<< peri << endl;		
        cout << endl;
        return 0;
    }
