/* Write a program in C++ to find the Area and Perimeter of a Rectangle. 
Sample Output:
Find the Area and Perimeter of a Rectangle :
-------------------------------------------------
Input the length of the rectangle : 10
Input the width of the rectangle : 15
The area of the rectangle is : 150
The perimeter of the rectangle is : 50 */

#include <iostream>
using namespace std;

    int main()
    {
    	int width, length, area, perimeter;
		cout << "Find the Area and Perimeter of a Rectangle :\n";
		cout << "-------------------------------------------------\n";		
        cout<<" Input the length of the rectangle : ";
    	cin >> length;
		cout<<" Input the width of the rectangle : ";
    	cin >> width;
    	area = (length*width);
		perimeter = 2*(length + width);
        cout<<" The area of the rectangle is : "<< area << endl;
        cout<<" The perimeter of the rectangle is : "<< perimeter;		
        return 0;
    }
