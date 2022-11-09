#include <iostream>
#include <stack>

using namespace std;

int main() {
  stack<int>st;
  int K;
  cin >> K;
  int ans = 0;
  while(K--){
    int num;
    cin >> num;
    if(num == 0){
      st.pop();
      }
    else{
      st.push(num);
    }
  }
  int size = st.size();
  for(int i = 0; i < size; i++){
    ans += st.top();
    st.pop();
  }
  cout << ans;
}