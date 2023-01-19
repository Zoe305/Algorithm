#include <bits/stdc++.h>

using namespace std;

int N;
int dp[1001];

int main(void){
    cin >> N;

    dp[0] = 0;
    dp[1] = 1;
    dp[2] = 3;
    for(int i = 3; i <= N; i++){
        dp[i] = (dp[i-1] + dp[i-2]*2)%796796;
    }
    cout << dp[N];
}