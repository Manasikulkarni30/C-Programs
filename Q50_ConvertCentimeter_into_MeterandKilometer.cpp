/* Write a program in C++ to enter length in centimeter and convert it into meter and kilometer. 
Sample Output:
Convert centimeter into meter and kilometer :
--------------------------------------------------
Input the distance in centimeter : 250000
The distance in meter is: 2500
The distance in kilometer is: 2.5  */

#include<iostream>
using namespace std;

int main()
{
    float km, meter,cent;
	cout << "Convert centimeter into meter and kilometer :\n";
	cout << "--------------------------------------------------\n";	
    cout << " Input the distance in centimeter : ";
    cin >> cent;
	meter = (cent/100); 
	km = (cent/100000);
	cout << " The distance in meter is: "<< meter << endl;
	cout << " The distance in kilometer is: "<< km;	
    return 0;
}
