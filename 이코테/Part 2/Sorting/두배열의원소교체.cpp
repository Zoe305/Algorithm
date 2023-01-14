#include <bits/stdc++.h>

using namespace std;

int N, K;
vector<int> A;
vector<int> B;

int main(void){
    cin >> N >> K;

    for(int i = 0; i < N; i++){
        int x;
        cin >> x;
        A.push_back(x);
    }
    for(int i = 0; i < N; i++){
        int y;
        cin >> y;
        B.push_back(y);
    }

    sort(A.begin(), A.end(), greater<>());
    sort(B.begin(), B.end(), greater<>());

    int i = 0;
    int j = N-1;

    while(K > 0){ 
        if(B[i] >= A[i]){
            A[j] = B[i];
            i++;
            j--;
            K--;
        }else{
            if(B[i] >= A[j]){
                A[j] = B[i];
                i++;
                j--;
                K--;
            }
        }
    }

    int sum = 0;
    for(int i = 0; i < N; i++){
        sum += A[i];
    } 
    
    cout << sum;
}