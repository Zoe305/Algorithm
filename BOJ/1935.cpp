#include <iostream>
#include <stack>

using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(NULL);

    int N;
    string px;
    cin >> N >> px;

    stack<double>st;

    int arr[26];

    for(int i = 0; i < N; i++){
        int num;
        cin >> num;
        arr[i] = num;
    }

    double var1, var2;

    for(int i = 0; i < px.length(); i++){
        if(px[i] >= 'A' && px[i] <= 'Z'){
            st.push(arr[px[i] - 'A']);
            }
        else{
            var2 = st.top();
            st.pop();
            var1 = st.top();
            st.pop();
            double result;
            switch(px[i]){

                case '+':
                    result = var1 + var2;
                    break;
            
                case '-':
                    result = var1 - var2;
                    break;

                case '*':
                    result = var1 * var2;
                    break;

                case '/':
                    result = var1 / var2;
                    break;
            }
            st.push(result);
        }
    }

    cout << fixed;
    cout.precision(2);

    cout << st.top() << '\n';

    return 0;
}
