#include <bits/stdc++.h>

using namespace std;
#define X first
#define Y second

int board[1002][1002];
int dist1[1002][1002];
int dist2[1002][1002];
int dx[4] = {0,0,1,-1};
int dy[4] = {1,-1,0,0};
int t,w,h;
int main(void){
  ios::sync_with_stdio(0);
  cin.tie(0);

  cin >> t;
  while(t--){
    bool escape = false;
    queue<pair<int, int>> Q1 = {};
    queue<pair<int, int>> Q2 = {};
    cin >> w >> h;
    for(int i = 0; i < w; i++){
      fill(dist1[i], dist1[i]+h, 0);
      fill(dist2[i], dist2[i]+h, 0);
    }


    for(int i = 0; i < w; i++){
      for(int j = 0; j < h; j++){
        char c; 
        cin >> c;
        if(c == '#') board[i][j] = -1;
        else{
            if(c == '@'){
                Q1.push({i,j});
                dist1[i][j] = 1;
            }else if(c == '*'){
                Q2.push({i,j});
                dist2[i][j] = 1;
            }
            board[i][j] = 0;
        }
    }
}

  //fire case
  while(!Q2.empty()){
    auto cur = Q2.front(); Q2.pop();
    for(int dir = 0; dir < 4; dir++){
      int nx = cur.X + dx[dir];
      int ny = cur.Y + dy[dir];
      if(nx < 0 || nx >= w || ny < 0; ny >= h) continue;
      if(board[nx][ny] == -1) continue;
      if(dist2[nx][ny]) continue;  
      dist2[nx][ny] = dist2[cur.X][cur.Y]+1;
      Q2.push({nx,ny});
    }
  }


    
  //sg case
  while(!Q1.empty() && (!escape)){
    auto cur = Q1.front(); Q1.pop();
    for(int dir = 0; dir < 4; dir++){
        int nx = cur.X + dx[dir];
        int ny = cur.Y + dy[dir];
        if(nx < 0 || nx >= w || ny < 0; ny >= h){
            cout << dist1[cur.X][cur.Y] << '\n';
            escape = true;
            break;
        }
        if(board[nx][ny] == -1) continue;
        if(dist1[nx][ny]) continue;
        if(dist2[nx][ny] != 0 && dist2[nx][ny] <= dist1[cur.X][cur.Y]+1) continue;
        dist1[nx][ny] = dist1[cur.X][cur.Y] +1;
        Q1.push({nx, ny});
     }
    } 
    if(!escape) cout << "IMPOSSIBLE" << '\n';
  }
}
