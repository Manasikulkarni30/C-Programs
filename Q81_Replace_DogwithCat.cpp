/* Write a C++ program to which replace all the words "dog" with "cat" 
Sample Text: The quick brown fox jumps over the lazy dog. You can assume that the number of characters in a text 
is less than or equal to 1000.  */

#include <iostream>
using namespace std;
  
int main()
{
    cout << "Enter the text in which the dog word is included: " << endl; 
	string str;
    getline(cin, str);
    cout << "Original text: " << str;
        for (int j = 0; j < (int)str.size(); j++) {
            string key = str.substr(j, 3), repl;
            if (key == "dog") {
                repl = "cat";
                for (int k = 0; k < 3; k++) {
                    str[j+k] = repl[k];
                }
            }
        }
       cout <<"\nNew text: " << str << endl;
   
    return 0;
}
