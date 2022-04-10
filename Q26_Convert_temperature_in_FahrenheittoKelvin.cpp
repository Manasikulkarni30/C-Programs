/* Write a program in C++ to convert temperature in Fahrenheit to Kelvin. 
Sample Output:
Convert temperature in Fahrenheit to Kelvin :
---------------------------------------------------
Input the temperature in Fahrenheit : 80.33
The temperature in Fahrenheit : 80.33
The temperature in Kelvin : 300 */

#include <iostream>
using namespace std;
 
int main()
{
    float kel, frh;
	cout << "Convert temperature in Fahrenheit to Kelvin  :\n";
	cout << "---------------------------------------------------\n";	
    cout << " Input the temperature in Fahrenheit : ";
    cin >> frh;
    kel = (5.0 / 9) * (frh - 32) + 273.15;
    cout << " The temperature in Fahrenheit : " << frh << endl;
    cout << " The temperature in Kelvin : " << kel;
    return 0;
}
