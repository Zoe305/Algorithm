#include <bits/stdc++.h>

using namespace std;


int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int N, height;
    cin >> N;
    stack<pair<int, int>>st;

    for(int i = 1; i <= N; i++){
        cin >> height;

        while(!st.empty()){
            if(st.top().second > height){
                cout << st.top().first << " ";
                break;
            }else st.pop();
        }

        if(st.empty()){
            cout << "0 ";
        }

        st.push({i, height});
    }


}