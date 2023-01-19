#include <bits/stdc++.h>

using namespace std;

int N, M;
vector<int>bill;
int dp[10001];

int main(void){
    cin >> N >> M;
    for(int i = 0; i < N; i++){
        int x;
        cin >> x;
        bill.push_back(x);
    }

    dp[0] = 0;

    for (int i = 0; i < N; i++){
        for (int j = bill[i]; j <= M; j++){
            if (dp[j - bill[i]] != 10001) {
                dp[j] = min(dp[j], dp[j - bill[i]] + 1);
            }
        }
    }

    if (dp[M] == 10001){
        cout << -1;
    }else{
        cout << dp[M];
    }
}