/* Write a C++ program to replace all the lower-case letters of a given string with the corresponding capital letters. */

#include <iostream>
using namespace std;

int main()
{
   char ch;
   cout<<"Enter a character in lowercase: "; 
   cin>>ch;
   ch=ch-32;
   cout<<"Entered character in uppercase: "<<ch;
   return 0;
}
