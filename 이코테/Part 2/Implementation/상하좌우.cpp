#include <bits/stdc++.h>

using namespace std;

int N;
int x = 1, y = 1;
string head;
int dx[4] = {-1, 1, 0, 0};
int dy[4] = {0, 0, -1, 1};
char moveTypes[4] = {'L', 'R', 'U', 'D'};

int main(void){
    cin >> N;
    cin.ignore();
    getline(cin, head);
    for(int i = 0; i < head.size(); i++){
        char loc = head[i];
        int nx, ny;
        for(int j = 0; j < 4; j++){
            if(loc == moveTypes[j]){
                nx = x + dy[j];
                ny = y + dx[j]; 
            }  
        }
        if(nx < 1 || ny < 1 || nx > N || ny > N) continue;
        x = nx;
        y = ny;
    }

    cout << x << ' ' << y << '\n';

}
