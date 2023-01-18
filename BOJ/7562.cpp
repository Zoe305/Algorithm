#include <bits/stdc++.h>

using namespace std;

#define X first
#define Y second

int dist[304][304];

int dx[8] = {2, 1, -1, -2, -2, -1, 1, 2};
int dy[8] = {1, 2, 2, 1, -1, -2, -2, -1};

int T,I,curx, cury, nightx, nighty;
queue<pair<int, int>> Q;

int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> T;
    while(T--){
        cin >> I;
        for(int i = 0; i < I; i++) fill(dist[i], dist[i]+I, -1);
        cin >> curx >> cury >> nightx >> nighty;
        Q.push({curx, cury});
        dist[curx][cury] = 0;
        while (!Q.empty()) {
            auto cur = Q.front(); Q.pop();
            for (int dir = 0; dir < 8; dir++) {
            int nx = cur.X + dx[dir];
            int ny = cur.Y + dy[dir];
            if (nx < 0 || nx >= I || ny < 0 || ny >= I) continue;
            if (dist[nx][ny] >= 0) continue;
            dist[nx][ny] = dist[cur.X][cur.Y] + 1;        
            Q.push({nx, ny});
            }
        }
        cout << dist[nightx][nighty] << '\n';
    }
    return 0;
}