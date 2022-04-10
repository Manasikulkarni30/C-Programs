/* Write a program in C++ to calculate the volume of a sphere. 
Sample Output:
Calculate the volume of a sphere :
---------------------------------------
Input the radius of a sphere : 6
The volume of a sphere is : 904.32 */

#include <iostream>
using namespace std;

    int main()
    {
    	int radius1;
    	float volsphere;
		cout << "Calculate the volume of a sphere :\n";
		cout << "---------------------------------------\n";		
        cout<<"Input the radius of a sphere : ";
    	cin >> radius1;
    	volsphere = (4 * 3.14 * radius1 * radius1 * radius1)/3;
        cout<<"The volume of a sphere is : "<< volsphere;
        return 0;
    }
