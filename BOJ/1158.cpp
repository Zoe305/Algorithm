#include <iostream>
#include <queue>

using namespace std;
queue<int>yo;

int main(){
    int N, K;
    cin >> N >> K;
    for(int i = 1; i <= N; i++) yo.push(i);


    cout << "<";

    while(yo.size() > 1){
        for(int i = 1; i < K; i++){
            int val = yo.front();
            yo.pop();
            yo.push(val);
        }
        cout << yo.front() << ", ";
        yo.pop();
    }
    cout << yo.front() << ">";
}
