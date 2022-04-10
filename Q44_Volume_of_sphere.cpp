/* Write a language program to get the volume of a sphere with radius 6. 
Sample Output:
Calculate the volume of a sphere :
---------------------------------------
Input the radius of a sphere : 5
The volume of a sphere is : 523.333  */

#include <iostream>
using namespace std;

    int main()
    {
    	int radius;
    	float volume;
		cout << "Calculate the volume of a sphere :\n";
		cout << "---------------------------------------\n";		
        cout<<" Input the radius of a sphere : ";
    	cin>>radius;
    	volume = (4*3.14*radius*radius*radius)/3;
        cout<<" The volume of a sphere is : "<< volume;
        return 0;
    }

