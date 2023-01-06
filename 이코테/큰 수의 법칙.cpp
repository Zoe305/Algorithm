#include <bits/stdc++.h>

using namespace std;

int N, M, K;
int result;
int arr[10001] = { };

bool desc(int a, int b){ 
  return a > b; 
} 

int main(void){
    cin >> N >> M >> K;
    for(int i = 0; i < N; i++){
        cin >> arr[i];
    }

    sort(arr, arr+N, desc);
    int num = arr[0];
    int next = arr[1];
    while(M > 0){
        for(int i = 0; i < K; i++){
            result += num;
            M--;
        }
        result += next;
        M--;
    }
    cout << result;
}

/*
큰 수의 법칙 문제
배열을 정렬한 후 가장 큰 수를 K번, 그 다음 큰 수를 한 번 더하는 방식을 M번 더해질 때까지 반복하면 된다.

* 금방 풀 수 있는 문제였지만 굳이 내림차순으로 바꾸기 위해 따로 함수를 만들 필요가 없었던 것을 나중에 알았다. 그냥 N-1, N-2로 해결하면 됐을 것을...
*/