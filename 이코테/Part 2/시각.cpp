#include <bits/stdc++.h>

using namespace std;

int h, cnt;

int main(void){
    cin >> h;
    for(int i = 0; i <= h; i++){
        for(int m = 0; m < 60; m++){
            for(int s = 0; s < 60; s++){
                if(i%10 == 3 || m/10 == 3 || m%10 == 3 || s/10 == 3 || s%10 == 3) cnt++;
            }
        }
    }

    cout << cnt;
}