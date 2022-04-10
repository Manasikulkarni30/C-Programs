/* Write a C++ program to check whether given length of three side form a right triangle.  */


#include <iostream>
using namespace std;
int main()
 {
  int x,y,z;
 
     cout << "Input the three sides of a triangle:\n";
 
     cin >> x >> y >> z;  
 
     if((x*x)+(y*y)==(z*z) || (x*x)+(z*z)==(y*y) || (y*y)+(z*z)==(x*x) )
         {  
		     cout << "It is a right angle triangle!\n";  
	}
       else
         { 
		  cout << "It is not a right angle triangle!\n"; 
		  }
    return 0;
}
