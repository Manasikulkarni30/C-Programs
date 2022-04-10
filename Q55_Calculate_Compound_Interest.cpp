/* Write a program in C++ to enter P, T, R and calculate Compound Interest. 
Sample Output:
Calculate the Compound Interest :
------------------------------------- Input the Principle: 20000
Input the Rate of Interest: 10
Input the Time: 1.5
The Interest after compounded for the amount 20000 for 1.5 years @ 10
% is: 3073.8 The total amount after compounded for the amount 20000 for 1.5 years @
10 % is: 23073.8   */

#include<iostream>
#include<math.h>
using namespace std; 
int main()
{
    float p,r,t,cp,ci;
	cout << "Calculate the Compound Interest :\n";
	cout << " -------------------------------------\n"; 	
	cout<<" Input the Principle: ";
	cin>>p;
	cout<<" Input the Rate of Interest: ";
	cin>>r;
	cout<<" Input the Time: ";
	cin>>t;	
    ci=p*pow((1+r/100),t)-p;	
    cp=p*pow((1+r/100),t);
    cout<<"The Interest after compounded for the amount "<<p<<" for "<<t<<" years @ "<<r<<" % is: \n"<<ci;    
    cout << endl; 
	cout<<"The total amount after compounded for the amount "<<p<<" for "<<t<<" years @ "<<r<<" % is: \n"<<cp;    
    return 0;
}
