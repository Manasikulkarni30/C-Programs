/* Write a language program in C++ which accepts the user's first and last name and print them in reverse order with a space between them. 
Sample Output:
Print the name in reverse where last name comes first:
-----------------------------------------------------------
Input First Name: Alexandra
Input Last Name: Abramov
Name in reverse is: Abramov Alexandra */

#include <iostream>
using namespace std;
int main()

{
char fname[30], lname [30];
 cout << "Print the name in reverse where last name comes first:\n";
 cout << "-----------------------------------------------------------\n";
cout << " Input First Name: ";
cin >> fname;
cout << " Input Last Name: ";
cin >> lname;
cout << " Name in reverse is: "<< lname << " "<< fname;
return 0;
}
