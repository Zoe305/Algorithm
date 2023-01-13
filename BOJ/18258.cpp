#include <iostream>
#include <string>

using namespace std;

int queue[2000005];
int f;
int r;

void push(int x){
    queue[r++] = x;
}

int pop(){
    if(r == f) return -1;
    else return queue[f++];
}

int size(){
    return r-f;
}

bool empty(){
    if(r == f) return true;
    else return false;
}

int front(){
    if(r == f) return -1;
    else return queue[f];
}

int back(){
    if(r == f) return -1;
    else return queue[r-1];
}


int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

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
        else if(cmd == "pop"){
            cout << pop() << '\n';
        }
        else if(cmd == "size"){
            cout << size() << '\n';
        }
        else if(cmd == "empty"){
            cout << empty() << '\n';
        }
        else if(cmd == "front"){
            cout << front() << '\n';
        }
        else if(cmd == "back"){
            cout << back() << '\n';
        }
    }
    
    return 0;
}
