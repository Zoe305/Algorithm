#include <bits/stdc++.h>

using namespace std;

int N, M;
vector<int> RC;

int main(void){
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    cin >> N >> M;
    for (int i = 0; i < N; i++){
        int x;
        cin >> x;
        RC.push_back(x);
    }

    int start = 0;
    int end = 1e9;
    int result = 0; 

    while (start <= end){
        long long int sum = 0;
        int mid = (start + end) / 2;
        for (int i = 0; i < N; i++){
            if (RC[i] > mid) sum += RC[i] - mid; 
        }
        if (sum < M){
            end = mid - 1;
        }else{
            result = mid;
            start = mid + 1;
        }
    }
    cout << result;
}
/*stnd를 놓고 합이 M보다 크냐 작냐에 따라서 ++, --를 시켰는데,
이렇게 되면 이진탐색을 처음 한 번만 사용하게 됨
그래서 코드 수정*/