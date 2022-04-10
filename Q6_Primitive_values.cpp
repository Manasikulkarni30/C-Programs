/*Write a program in C++ to check whether the primitive values crossing the limits or not. 
Check whether the primitive values crossing the limits or not :
--------------------------------------------------------------------
The Gender is : F
Is she married? : 1
Number of sons she has : 2
Year of her appointment : 2009
Salary for a year : 1500000
Height is : 79.48
GPA is 4.69
Salary drawn upto : 12047235
Balance till : 995324987 */

#include <iostream>
using namespace std;
 
int main() 
{
    cout << "Check whether the primitive values crossing the limits or not :\n";
	cout << "________________________________________________\n";
   char gender = 'F';             
   bool married = true;         
   int numOfsons = 2; 
   int yearOfAppt = 2009;      
   int YearlyPackage = 1500000;   
   double height = 79.48;       
   float GPA = 4.69f;           
   long Totalsalarydrawn = 12047235L;     
   long balance = 995324987LL;    

   cout << " The Gender is : " << gender << endl;
   cout << " Is she married? : " << married << endl;
   cout << " Number of sons she has : " << numOfsons << endl;
   cout << " Year of her appointment : " << yearOfAppt << endl;
   cout << " Salary for a year : " << YearlyPackage << endl;
   cout << " Height is : " << height << endl;
   cout << " GPA is " << GPA << endl;
   cout << " Salary drawn upto : " << Totalsalarydrawn << endl;
   cout << " Balance till : " << balance << endl;   
   return 0;
}

