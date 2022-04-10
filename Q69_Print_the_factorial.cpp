/*  Write a C++ program to read an integer n and prints the factorial of n, assume that n = 10  */

#include <iostream>
using namespace std;

long long factorial(int num) 
{
    if (num == 0) 
	{
        return 1;
    }
    else 
	{
        return num * factorial(num-1);
    }
}

int main()
{
    int num;
    cout << "Enter the integer to find the factorial : " << endl;
    cin >> num;
    cout << factorial(num) << endl;
}
