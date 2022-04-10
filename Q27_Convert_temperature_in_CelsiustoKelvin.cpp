/* Write a program in C++ to convert temperature in Celsius to Kelvin. 
Sample Output:
Convert temperature in Celsius to Kelvin :
---------------------------------------------------
Input the temperature in Celsius : 26.85
The temperature in Celsius : 26.85
The temperature in Kelvin : 300 */

#include <iostream>
using namespace std;
 
int main()
{
    float kel, cel;
	cout << "Convert temperature in Celsius to Kelvin  :\n";
	cout << "---------------------------------------------------\n";	
    cout << " Input the temperature in Celsius : ";
    cin >> cel;
    kel = cel + 273.15;
    cout << " The temperature in Celsius : " << cel << endl;
    cout << " The temperature in Kelvin : " << kel;
    return 0;
}
