/* Write a C++ program to convert a given number into hours and minutes. Separate the number of hours and minutes with a colon. 
For example if a given number is 67 the output should be 1:7  */

#include <iostream>
#include <string>
using namespace std;
void Time_Convert(int num)
 {
	bool flag;
	int hr = 0;
	do
	{
		flag = false;
		if (num >= 60)
		{
			hr++;
			num -= 60;
			flag = true;
		}
	} 
	while (flag);
	cout << "The given number into hours and minutes is : " << endl;
	cout << "H:M " << hr << ":" << num << endl;
}

int main() 
{
	int num;
	cout << "Enter the number : " << endl;
	cin >> num;
	Time_Convert(num);
	return 0;
}
