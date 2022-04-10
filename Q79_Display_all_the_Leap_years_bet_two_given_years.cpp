/* Write a C++ program to display all the leap years between two given years. If there is no leap year in the given period,display a suitable message. 
Note: Range of the two given years: ( 0 < year1 = year2 < 3,000). */


#include <iostream>
#define range(i,a,b) for(int (i)=(a);(i)<(b);(i)++)
#define rep(i,n) range(i,0,n)
using namespace std;
 
inline bool isleap(int year)

{
    if(year%400==0)
        return true;
    if(year%100==0)
        return false;
    if(year%4==0)
        return true;
    return false;
}
 
int main(void)
{
    int a,b;
    bool space=false;
    cout << "Enter year 1 : " << endl;
	cin >> a;
	cout << "Enter year 2 : " << endl;
	cin >> b;
    cout << "\nInput years: " << a << " - " << b;
    cout << "\n\nLeap years between said years:\n";
        if(space) puts("");
        bool ans=false;
        range(i,a,b+1) if(isleap(i)) cout << i << endl,ans=true;
        if(!ans) puts("No leap years.");
        space=true;
   
    return 0;
}
