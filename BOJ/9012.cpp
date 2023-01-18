#include <iostream>
#include <stack>
#include <string>

using namespace std;



bool check(string aps){
  stack<char>st;

  for(int i = 0; i < aps.length(); i++){
      char vps = aps[i];
      if(vps == '(') st.push(aps[i]);
      else {
        if (!st.empty()) st.pop();
        else return false;
      }
    }
 return st.empty(); 
 }


int main(void){
  int T;
  cin >> T;
  for(int i = 0; i < T; i++){
    string aps;
    cin >> aps;
    if(check(aps)) cout << "YES" << '\n';
    else cout << "NO" << '\n';
  }

  return 0;
}