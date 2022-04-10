/*  Write a C++ program to which reads n digits chosen from 0 to 9 and counts the number of combinations where the 
sum of the digits equals to given number. Do not use the same digits in a combination. 
For example, the combinations where n = 2 and s = 5 are as follows:
0 + 5 = 5
1 + 4 = 5
3 + 2 = 5  */

#include <string.h>
#include <iostream>
 
using namespace std;
 
int main()
{
    const int MAX_NUM  = 9;
    const int MAX_NOS = 9;
    const int MAX_SUM_VAL = 100;
 
    int n, s, dp[MAX_NOS + 1][MAX_NUM + 1][MAX_SUM_VAL + 1];
 
    long long SUM_VAL = 0;
 
    memset(dp, 0, sizeof(dp));
    
    cout << "Enter two numbers : " << endl;
 
    for (int i = 0; i < MAX_NUM; i++)
    {
        dp[1][i][i] = 1;
    }
 
    for (int N = 2; N <= MAX_NOS; N++)
    {
        for (int i = 1; i <= MAX_NUM; i++)
        {
            for (int j = 1; j <= MAX_SUM_VAL; j++)
            {
                if (j - i >= 0)
                {
                    for (int k = 0; k < i; k++)
                    {
                        dp[N][i][j] += dp[N - 1][k][j - i];
                    }
                }
            }
        }
    }
 
    cin >> n >> s;
 
      SUM_VAL = 0;
 
        for (int i = 0; i <= MAX_NUM; i++)
        {
            SUM_VAL += dp[n][i][s];
        }
 
        cout << "Number of digits " << n << " and Sum = " << s;
        cout << "\nNumber of pairs: " <<SUM_VAL << endl;
  
 
    return 0;
}
