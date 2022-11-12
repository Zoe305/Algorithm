#include <bits/stdc++.h>

using namespace std;

int n, x, ans;
int arr[100001];

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

	int l, r;
	
	cin >> n;
	for (int i = 0; i < n; i++) cin >> arr[i];
	cin >> x;

	sort(arr, arr + n);
	l = 0;
	r = n - 1;

	while (l < r){
		if (arr[l] + arr[r] == x){
			ans++;
			r--;	
		}
		else if (arr[l] + arr[r] > x) r--;
		else l++;
	}

	cout << ans;
}