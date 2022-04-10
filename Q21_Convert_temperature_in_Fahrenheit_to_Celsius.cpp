/* Write a program in C++ to convert temperature in Fahrenheit to Celsius. 
Sample Output:
Convert temperature in Fahrenheit to Celsius :
---------------------------------------------------
Input the temperature in Fahrenheit : 95
The temperature in Fahrenheit : 95
The temperature in Celsius : 35 */

#include <iostream>
using namespace std;
 
int main()
{
    float frh, cel;
	cout << "Convert temperature in Fahrenheit to Celsius :\n";
	cout << "---------------------------------------------------\n";	
    cout << " Input the temperature in Fahrenheit : ";
    cin >> frh;
    cel = ((frh * 5.0)-(5.0 * 32))/9;
    cout << " The temperature in Fahrenheit : " << frh << endl;
    cout << " The temperature in Celsius : " << cel;
    return 0;
}

