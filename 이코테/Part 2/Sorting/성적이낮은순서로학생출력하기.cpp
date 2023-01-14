#include <bits/stdc++.h>

using namespace std;

int main(void){
    int N;
    vector<pair<int, string>> v;
    cin >> N;

    for(int i = 0; i < N; i++){
        string name;
        int score;
        cin >> name >> score;
        v.push_back(make_pair(score,name));
    }

    sort(v.begin(), v.end());
    for(int i = 0; i < N; i++){
        cout << v[i].second << " ";
    }

}