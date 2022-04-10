/* Write a C++ program that accepts n different numbers (0 to 100) and s which is equal to the sum of the n different numbers. 
Your job is to find the number of combination of n numbers and the same number can not be used for one combination. */

#include <iostream>
#define range(i,a,b) for(int (i)=(a);(i)<(b);(i)++)
#define rep(i,n) range(i,0,n)
using namespace std;
int num1,num2; 
long long int dp[10][1010]; 
int main(void){
    dp[0][0]=1LL;
    rep(i,101){
        for(int j=8;j>=0;j--)rep(k,1010){
            if(k+i<=1010)
                dp[j+1][k+i]+=dp[j][k];
        }
    }
    cout << "Input num1 and num2: ";
    cin >> num1 >> num2;
    cout << "\nNumber of combination: ";
    cout << dp[num1][num2] << endl;

    return 0;
}
