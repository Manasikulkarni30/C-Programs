/* Write a program in C++ to convert temperature in Kelvin to Fahrenheit. 
Sample Output:
Convert temperature in Kelvin to Fahrenheit :
---------------------------------------------------
Input the temperature in Kelvin : 300
The temperature in Kelvin : 300
The temperature in Fahrenheit : 80.33 */

#include <iostream>
using namespace std;
int main()
{
    float kel, frh;
	cout << "Convert temperature in Kelvin to Fahrenheit  :\n";
	cout << "---------------------------------------------------\n";	
    cout << " Input the temperature in Kelvin : ";
    cin >> kel;
    frh = (9.0 / 5) * (kel - 273.15) + 32;
    cout << " The temperature in Kelvin    : " << kel << endl;
    cout << " The temperature in Fahrenheit : " << frh;
    return 0;
}

