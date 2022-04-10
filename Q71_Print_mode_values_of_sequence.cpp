/* Write a C++ program which reads a sequence of integers and prints mode values of the sequence. The number of integers is greater than 
or equals to 1 and less than or equals to 100. 
Note: The mode of a set of data values is the value that appears most often  */

#include <iostream>
using namespace std;

int getTotalNumberOfSequences(int m, int n)
{  
    if (m < n)
        return 0;
   
    if (n == 0)
        return 1;
   
    return getTotalNumberOfSequences(m - 1, n) +
           getTotalNumberOfSequences(m / 2, n - 1);
}    
int main()
{
    int m ,n ;
	cout << "Enter the values : ";
	cin >> m;
	cin >> n;
    cout << "Total number of possible sequences = " << getTotalNumberOfSequences(m, n);
    return 0;
}
