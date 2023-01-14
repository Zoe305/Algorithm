#include <bits/stdc++.h>

using namespace std;

int dx[8] = {1, -1, -2, -2, -1, 1, 2, 2};
int dy[8] = {2, 2, 1, -1, -2, -2, -1, 1};
string loc;

int main(void){
    cin >> loc;
    int row = loc[1] - '0';
    int col = loc[0] - 'a' + 1;

    int res = 0;
    for(int i = 0; i < 8; i++){
        int nx = row + dx[i];
        int ny = col + dy[i];

        if(nx >= 1 && ny >= 1 && nx <= 8 && ny <= 8) res ++;
    }
    cout << res;
}