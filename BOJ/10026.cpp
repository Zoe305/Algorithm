#include <bits/stdc++.h>

using namespace std;

#define X first
#define Y second

char board[102][102];
bool vis[102][102];
int dx[4] = {1,0,-1,0};
int dy[4] = {0,1,0,-1};
int N;
queue<pair<int, int>> Q;

void BFS(int x, int y){
  vis[x][y] = true;
  Q.push({x, y});
  vis[x][y] = 1;
  while(!Q.empty()){
  auto cur = Q.front(); Q.pop();
  for(int dir = 0; dir < 4; dir++){
    int nx = cur.X + dx[dir];
    int ny = cur.Y + dy[dir];
    if (nx < 0 || nx >= N || ny < 0 || ny >= N) continue;
    if (vis[nx][ny] == 1 || board[x][y] != board[nx][ny]) continue;
    vis[nx][ny] = 1;    
    Q.push({nx, ny});
    }
  }
}

int areacount(){
  int cnt = 0;
  for(int i = 0; i < N; i++){
    for(int j = 0; j < N; j++){
      if(!vis[i][j]){
        cnt++;
        BFS(i, j);
      }
    }
  }
  return cnt;
}


int main(void){
  ios::sync_with_stdio(0);
  cin.tie(0);

  cin >> N;

  for(int i = 0; i < N; i++){
    for(int j = 0; j < N; j++){
      cin >> board[i][j];
    }
  }

  int nocolweak = areacount();

  for(int i = 0; i < N; i++){
    fill(vis[i], vis[i]+N, false);
  }

  for(int i = 0; i < N; i++){
    for(int j = 0; j < N; j++){
      if(board[i][j] == 'G'){
        board[i][j] = 'R';
      }
    }
  }
  int colweak = areacount();
  cout << nocolweak << " " << colweak;

  return 0;
}
