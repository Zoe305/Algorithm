#include <bits/stdc++.h>

using namespace std;

int N;
int arr[] = { };

int main(void){
    cin >> N;
    for(int i = 0; i < N; i++){
        cin >> arr[i];
    }
    sort(arr, arr + (N-1), greater<int>());

    for(int i = 0; i < N; i++){
        cout << arr[i];
    }
}