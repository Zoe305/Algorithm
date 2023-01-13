#include <iostream>
#include <string>

using namespace std;

int s;
int ans[10001];

void push(int x){
    ans[s] = x;
    s++;
}

int pop(){
    if(s == 0) return -1;
    int q = ans[s-1];
    s--;
    return q;
}

int size(){
    return s;
}

int empty(){
    if(s == 0) return 1;
    else return 0  ;
}

int top(){
    if(s == 0) return -1;
    return ans[s-1];
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int N;
    cin >> N;
    while(N--){
        string cmd;
        cin >> cmd;
        if(cmd == "push"){
            int x;
            cin >> x;
            push(x);
        }
        if(cmd == "pop"){
            cout<< pop() << "\n";
        }
        if(cmd == "size"){
            cout<<size()<< "\n";
        }
        if(cmd == "empty"){
            cout<<empty()<< "\n";
        }
        if(cmd == "top"){
            cout<<top()<< "\n";
        }
    }
}
