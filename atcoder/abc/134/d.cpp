#include<bits/stdc++.h>
using namespace std;
#define FOR(i,a,b) for (int i=(a);i<(b);i++)
#define rep(i,n) FOR(i,0,n)
typedef long long ll;

int n;
int is_in[200005] = {};

int count(int k) {
	int cnt = 0;
	// k+1の倍数で今まで入ったものをカウント
	for (int i = 2*k; i <= n; i+=k) {
		cnt += is_in[i];
		// if (is_in[i]) {
		// 	cnt++;
		// }
	}
	return cnt;
}
int main(){
	cin >>n;
	int A[200005] = {};
	

	rep(i,n){
		cin >> A[i+1];
	}

	int cnt = 0;
	for (int i = n; i>=1; i--) {
		is_in[i] = int(A[i] != count(i)%2);
		cnt += is_in[i];
		// if (A[i]) {
		// 	if (count(i)%2==0) {
		// 		is_in[i] = 1;
		// 		cnt++;
		// 	}
		// } else {
		// 	if (count(i)%2==1) {
		// 		is_in[i] = 1;
		// 		cnt++;
		// 	}
		// }
	}

	cout << cnt << endl;
	FOR(i,1,n+1) {
		if (is_in[i]) {
			cout << i << endl;
		}
	}
}