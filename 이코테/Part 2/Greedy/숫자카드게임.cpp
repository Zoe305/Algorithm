#include <bits/stdc++.h>

using namespace std;

int N, M;
int mx;
int mn = 10001;
int res;

int main(void){

    cin >> N >> M;

    for(int i = 0; i < N; i++){
        
        for(int j = 0; j < M; j++){
            cin >> mx;
            mn = min(mx, mn);
        }
        res = max(res, mn);
    }

    cout << res;

}
