#include <bits/stdc++.h>

using namespace std;

#define X first;
#define Y second;
int ice[1002][1002];
bool vis[1002][1002];
int N, M;
int dx[4] = {1, 0, -1, 0};
int dy[4] = {0, 1, 0, -1};

int cnt = 0;

void BFS(int N, int M){
    queue<pair<int,int>>Q;
    vis[0][0] = 1;
    Q.push({N,M});
    while(Q.empty()){
        pair<int,int> cur = Q.front(); Q.pop();
        for(int dir = 0; dir < 4; dir++){
            int nx = cur.X + dx[dir];
            int ny = cur.Y + dy[dir];
            if(nx < 0 || nx >= N || ny < 0 || ny >= M) continue;
            if(vis[nx][ny] || ice[nx][ny] != 1) continue;
            vis[nx][ny] = 1;
            Q.push({nx, ny});
        }
    }
}

int main(void){
    cin >> N >> M;
    for(int k = 0; k < N; k++){
        for(int l = 0; l < M; l++){
            cin >> ice[k][l];
        }
    }

    for(int i = 0; i < N; i++){
        for(int j = 0; j < M; j++){
            if(!vis[i][j] && ice[i][j] == 0){
                BFS(i, j); cnt++;  
            } 
        }
    }

    cout << cnt;
}
