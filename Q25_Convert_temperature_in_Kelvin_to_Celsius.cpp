/* Write a program in C++ to convert temperature in Kelvin to Celsius. 
Sample Output:
Convert temperature in Kelvin to Celsius :
------------------------------------------------
Input the temperature in Kelvin : 300
The temperature in Kelvin : 300
The temperature in Celsius : 26.85 */

#include <iostream>
using namespace std; 
int main()
{
    float kel, cel;
	cout << "Convert temperature in Kelvin to Celsius  :\n";
	cout << "------------------------------------------------\n";	
    cout << " Input the temperature in Kelvin : ";
    cin >> kel;
    cel = kel - 273.15;
    cout << " The temperature in Kelvin    : " << kel << endl;
    cout << " The temperature in Celsius : " << cel;
    return 0;
}
