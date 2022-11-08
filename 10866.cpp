#include <iostream>
#include <algorithm>

using namespace std;

const int MX = 1000005;
int deque[2*MX+1];
int t = MX, h = MX;

void push_back(int x){
    deque[t++] = x;
}

void push_front(int x){
    deque[--h] = x;
}

void pop_front(){
    h++;
}

void pop_back(){
    t--;
}

int front(){
    return deque[h];
}

int back(){
    return deque[t-1];
}

int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int N;
    cin >> N;
    while(N--){
        string cmd;
        cin >> cmd;
        if (cmd == "push_back") {
            int x; 
            cin >> x;
            push_back(x);
        }
        else if (cmd == "push_front") {
            int x; 
            cin >> x;
            push_front(x);
            }
        else if(cmd == "pop_front"){
            if(t == h) cout << -1 << '\n';
            else{
                cout << front() << '\n';
                pop_front();
            }   
        }
        else if(cmd == "pop_back"){
            if(t == h) cout << -1 << '\n';
            else{
                cout << back() << '\n';
                pop_back();
            } 
        }
        else if (cmd == "size")
            cout << t-h << '\n';
        else if (cmd == "empty")
            cout << (t==h) << '\n';
        else if (cmd == "front") {
            if(t == h) cout << -1 << '\n';
            else cout << front() << '\n';
        }
        else if (cmd == "back"){
            if(t == h) cout << -1 << '\n';
            else cout << back() << '\n';
        }
            
    }    
    return 0;
}