/* Write a C++ program to swap first and last digits of any number. 
Sample Output:
Input any number: 12345
The number after swapping the first and last digits are: 52341 */

#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    int num, first, last, sum, digits, nn, a, b;
    cout << "Find the number after swapping the first and last digits:\n";
    cout << "-------------------------------------------------------------\n";
    cout << " Input any number: ";
    cin >> num;
    digits = (int)log10(num);
    first = num / pow(10, digits);
    last = num % 10;
    a = first * (pow(10, digits));
    b = num % a;
    num = b / 10;
    nn = last * (pow(10, digits)) + (num * 10 + first);
    cout << " The number after swaping the first and last digits are: " << nn;
}  
