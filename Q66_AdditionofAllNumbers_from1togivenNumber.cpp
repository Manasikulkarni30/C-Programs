/*  Write a C++ program to add all the numbers from 1 to a given number. 
Add 1 to 4: 10
Add 1 to 100: 5050  */

#include <iostream>
using namespace std;

int Add_1_to_given_number(int n) 
{

	int total = 0;

	for (int x = 1; x <= n; x++)
	{
		total = total + x;
	}
	return total;
}

int main() {

	cout << "Add 1 to 4: " << Add_1_to_given_number(4);
	cout << "\nAdd 1 to 100: " << Add_1_to_given_number(100);
	return 0;
}
