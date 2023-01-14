#include <bits/stdc++.h>

using namespace std;

int N;
int cnt;
int arr[4] = {500, 100, 50, 10};

int main(void){
    cin >> N;

    for(int i = 0; i < 4; i++){
        int coin = arr[i];
        cnt += N/coin;
        N %= coin;
    }

    cout << cnt;
}

/*
동전을 가장 적게 사용해서 거스름돈을 주는 문제
가장 큰 단위의 동전부터 차례대로 확인하면 된다.
거스름돈/동전을 하면 몇 개를 줘야 하는지,
거스름돈%동전을 하면 남은 금액을 알 수 있다.
동전 단위가 총 N개라고 했을 때 위 코드의 시간 복잡도는 O(N)이다.
동전 단위당 반복이 되기 때문!

* 배열 인덱스를 이용한 계산이 하고 싶을 때는 따로 변수를 선언할 것.
* count 함수 이름이기 때문에 변수 이름으로 사용할 수 없음 
*/
