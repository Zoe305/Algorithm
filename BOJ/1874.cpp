#include <iostream>
#include <algorithm>
#include <stack>
#include <string>

using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n, cnt =1;
    cin >> n;
    stack<int>st;
    string ans;

    while(n--){
        int num;
        cin >> num;
        while(cnt <= num){
          st.push(cnt++);
          ans += "+\n";
          }
        if(st.top() == num){
            st.pop();
            ans += "-\n";
        }else{ 
            ans = "NO";
            break;
            }
          }

    cout << ans;

  return 0;
}
