/*  Write a C++ program which prints three highest numbers from a list of numbers in descending order. */

#include<iostream>
using namespace std;
int main()
{
int a,b,c,big1,big2,big3;
cout << "Enter three numbers : " << endl;
cin>>a>>b>>c;

big1=a;
if(b>big1)
big1=b;
else
if(c>big1)
big1=c;


if(big1==a)
{
if(b>c)
{
big2=b;
big3=c;
}
else
{
big2=c;
big3=b;
}
}

else
{
if(big1==b)
if(a>c)
{
big2=a;
big3=c;
}
else
{
big2=c;
big3=a;
}

else
{
if(a>b)
{
big2=a;
big3=b;
}
else
{
big2=b;
big3=a;
}
}
}
cout << "Numbers in descending order : ";
cout << big1 << " " << big2 << " " << big3;
}
