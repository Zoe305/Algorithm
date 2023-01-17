#include <bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int A, B, C;
    cin >> A >> B >> C;
    int mul = A*B*C;
    int ans[10] = { };
    while(mul > 0){
        ans[mul%10]++;
        mul /= 10;
    }
    for(int i = 0; i < 10; i++){
        cout << ans[i] << '\n';
    }
}
