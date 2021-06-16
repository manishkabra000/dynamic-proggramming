/// Catalan Number ///
/*
c0 = 1
c1 = 1
c2 = c0c1 + c1c0 = 1*1 + 1*1 = 2
c3 = c0c2 + c1c1 + c2c0 = 1*2 + 1*1 + 2*1 = 5
...
cn = c0cn-1 + c1cn-2 + c2cn-3 + .... + cn-1c0  
*/

// Given an integer n. Find the nth catalan number

#include<iostream>
using namespace std;

long long int nthCatalan(int n) {
    int dp[n + 1] = {0};

    dp[0] = 1;
    dp[1] = 1;

    for(int i = 2; i <= n; i++) {
        dp[i] = 0;
        for(int j = 0; j < i; j++) {
            dp[i] += dp[j] * dp[i - j - 1];           
        }
    }
    return dp[n];
}

int main() {
    int n;
    cin >> n;
    cout << nthCatalan(n) << endl;
    return 0;
}