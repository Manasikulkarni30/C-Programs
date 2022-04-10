/* Write a C++ program to check whether the sequence of the numbers in a given array is a "Arithmetic" or "Geometric" sequence. 
Return -1 if the sequenc is not "Arithmetic" or "Geometric". 
From Wikipedia
In mathematics, an arithmetic progression (AP) or arithmetic sequence is a sequence of numbers such that the difference between the 
consecutive terms is constant. Difference here means the second minus the first. For instance, the sequence 5, 7, 9, 11, 13, 15, . . . 
is an arithmetic progression with common difference of 2.
In mathematics, a geometric progression, also known as a geometric sequence, is a sequence of numbers where each term after the 
first is found by multiplying the previous one by a fixed, non-zero number called the common ratio. For example, the sequence 2, 6, 18, 54, ... 
is a geometric progression with common ratio 3. Similarly 10, 5, 2.5, 1.25, ... is a geometric sequence with common ratio 1/2.
Example:
Sample Input: int nums1[] = { 1, 3, 5, 7 }
Sample Output: Arithmetic sequence */

#include <iostream>
using namespace std;
 
bool is_geometric(int arr[], int n)
{
    if (n == 1)
        return true;
 
    int ratio = arr[1] / (arr[0]);
 
    for (int i = 1; i < n; i++) {
        if ((arr[i] / (arr[i - 1])) != ratio) {
            return false;
        }
    }
    return true;
}

int main()
{
    int arr[] = { 1, 3, 5, 7 };
    int n = sizeof(arr) / sizeof(arr[0]);
 
    (is_geometric(arr, n)) ? cout << "Geometric sequence" << endl : cout << "Arithmetic sequence" << endl;
 
    return 0;
}

