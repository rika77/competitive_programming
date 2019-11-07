#include<bits/stdc++.h>
using namespace std;
#define FOR(i,a,b) for (int i=(a);i<(b);i++)
#define rep(i,n) FOR(i,0,n)
typedef long long ll;

int n;
int t[4] = {};
int S;

int dfs(int i, int a_sum) {
	if (i == n) {
		return max(a_sum, S - a_sum);
	}
	// add t[i] to A, or not.
	return min(dfs(i+1, a_sum+t[i]), dfs(i+1, a_sum));
}

int main(){
	cin >> n;
	rep(i,n) {
		cin >> t[i];
		S += t[i];
	}
	if (n == 1) {
		cout << t[0] << endl;
		return 0;
	}
	if (n == 2) {
		cout << max(t[0], t[1]) << endl;
		return 0;
	}
	cout << dfs(0, 0) << endl;
	return 0;
}

