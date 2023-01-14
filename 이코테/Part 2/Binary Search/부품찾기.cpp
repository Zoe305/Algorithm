#include <bits/stdc++.h>

using namespace std;

int N, M;
vector<int> proN;
vector<int> proM;

int main(void){
    cin >> N;
    for(int i = 0; i < N; i++){
        int x;
        cin >> x;
        proN.push_back(x);
    }

    sort(proN.begin(),proN.end());

    cin >> M;
    for(int i = 0; i < M; i++){
        int x;
        cin >> x;
        proM.push_back(x);
    }

    for(int i = 0; i < M; i++){
        
        if(binary_search(proN.begin(), proN.end(), proM[i]) == 1){
            cout << "YES" << " ";
        }else{
            cout << "NO" << " ";
        }
    }

}

/*이진 탐색을 하기 위해서는 오름차순 정렬이 필요하다. 
그래서 정렬을 하는 과정에서 무의식적으로 proM도 정렬을 했는데 proN정렬 코드를 복붙하는 과정에서 오타가 나서 정답이 나오지 않았었다. 
하지만 proM은 정렬할 필요가 없다는 점!
구현하려고 했으면 어려웠겠지만 STL로 쉽고 효율적으로 풀 수 있음에 감사했다.
*/