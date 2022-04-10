/* Write a C++ program to display the current date and time. 
Sample Output:
Display the Current Date and Time :
----------------------------------------
seconds = 57
minutes = 33
hours = 12
day of month = 6
month of year = 7
year = 2017
weekday = 4
day of year = 186
daylight savings = 0
Current Date: 6/7/2017
Current Time: 12:33:57 */

#include<iostream>
#include<cmath>
#include <ctime>
using namespace std;

int main()
{

 time_t t = time(NULL);
 tm* tPtr = localtime(&t);
 cout << "Display the Current Date and Time :\n";
 cout << "----------------------------------------\n";
 cout << " seconds = " << (tPtr->tm_sec) << endl;
 cout << " minutes = " << (tPtr->tm_min) << endl;
 cout << " hours = " << (tPtr->tm_hour) << endl;
 cout << " day of month = " << (tPtr->tm_mday) << endl;
 cout << " month of year = " << (tPtr->tm_mon)+1 << endl;
 cout << " year = " << (tPtr->tm_year)+1900 << endl;
 cout << " weekday = " << (tPtr->tm_wday )<< endl;
 cout << " day of year = " << (tPtr->tm_yday )<< endl;
 cout << " daylight savings = " <<(tPtr->tm_isdst )<< endl;
 cout << " Current Date: " <<(tPtr->tm_mday)<<"/"<< (tPtr->tm_mon)+1 <<"/"<< (tPtr->tm_year)+1900<< endl;
 cout << " Current Time: " << (tPtr->tm_hour)<<":"<< (tPtr->tm_min)<<":"<< (tPtr->tm_sec); 
    return 0;
}
