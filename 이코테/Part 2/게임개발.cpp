#include <bits/stdc++.h>

using namespace std;

int N, M;
int A, B, d;
int field[51][51] = { };
int dx[] = {0, -1, 0, 1};
int dy[] = {-1, 0, 1, 0};
int dir[] = {0, 1, 2, 3};

int main(void){
    cin >> N >> M;
    cin >> A >> B >> d;
    for(int i = 0; i < N; i++){
        for(int j = 0; j < M; j++){
            cin >> field[i][j];
        }
    }

    for(int i = 0; i < 4; i++){
        if(d == dir[i]){
            
        }
    }
}