/* Write a program in C++ to calculate the volume of a cube. 
Sample Output:
Calculate the volume of a cube :
---------------------------------------
Input the side of a cube : 5
The volume of a cube is : 125 */

#include <iostream>
using namespace std;

    int main()
    {
    	int side;
    	float volume;
		cout << "Calculate the volume of a cube :\n";
		cout << "---------------------------------------\n";		
        cout<<" Input the side of a cube : ";
    	cin >> side;
    	volume = (side * side * side);
        cout<<" The volume of a cube is : "<< volume;
        return 0;
    }

