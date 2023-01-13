#include <iostream>
#include <stack>
#include <string>

using namespace std;

int main(){
  ios::sync_with_stdio(0);
  cin.tie(0);

  string stick;
  cin >> stick;
  int cnt = 0;
  stack<char>st;

  for(int i = 0; i < stick.length(); i++){
    if(stick[i] == '(') st.push(stick[i]);
    else{ 
      if(stick[i] == ')' && stick[i-1] == '('){
      st.pop();
      cnt += st.size();
      }else{
      st.pop();
      cnt++;
      }
    }
  } 
  cout << cnt;
  return 0;
}
