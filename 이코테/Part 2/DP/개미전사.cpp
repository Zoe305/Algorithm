#include <bits/stdc++.h>

using namespace std;

int N, K;
vector<int>food;
int dp[100];

int main(void){
    cin >> N;
    for(int i = 0; i < K; i++){
        int x;
        cin >> x;
        food.push_back(x);
    }

    dp[0] = food[0];
    dp[1] = max(food[0], food[1]);
    for(int i = 2; i < N; i++){
        dp[i] = max(dp[i-1], dp[i-2] + food[i]);
    }

    cout << dp[N-1];
}
