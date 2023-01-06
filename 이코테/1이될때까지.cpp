#include <bits/stdc++.h>

using namespace std;

int N, K;
int cnt = 0;
int divi;

int main(void){

    cin >> N >> K;
    
    while(N>0){
        divi = (N/K)*K;
        cnt += (N - divi);
        N = divi;
        if(N<K) break;
        N /= K;
        cnt++;
    }

    cnt += N-1;

    cout << cnt;
}