/* Write a program in C++ to print a mystery series from 1 to 50. 
Sample Output:
Print a mystery series:
-------------------------
The series are:
5 4 2 7 11 10 8 13 17 16 14 19 23 22 20 25 29 28 26 31 35 34 32 37 41 4 0 38 43 47 46 44 49 */

#include <iostream>
using namespace std;
 
int main() 
{
 cout << "Print a mystery series:\n";
	cout << "-------------------------\n";
	cout << " The series are: \n";	
   int num = 1;
   while (true) 
   {
      ++num;
      if ((num % 3) == 0) 
      continue;
      if (num == 50) 
      break;
      if ((num % 2) == 0) 
      {
         num += 3;
      } 
      else 
      {
         num -= 3;
      }
      cout << num << " ";
   }
   return 0;
}
