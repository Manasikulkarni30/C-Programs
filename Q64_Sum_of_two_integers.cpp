/*  Write a C++ program to compute the sum of the two given integers and count the number of digits of the sum value. */

#include <iostream>  
#include<sstream>
using namespace std;  
int main()  
{  
int n,m,sum=0;    
cout << "Enter two numbers : ";    
cin >> n; 
cin >> m;   
sum = m + n; 
cout << "Sum is= "<< sum << endl;;   
stringstream str1;
    str1<<m+n;
    cout << "\nNumber of digits of the sum value is: "<<str1.str().size()<<endl; 
return 0;  
}  

