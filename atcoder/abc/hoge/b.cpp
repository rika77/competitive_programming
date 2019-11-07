#include<bits/stdc++.h>
using namespace std;
#define FOR(i,a,b) for (int i=(a);i<(b);i++)
#define rep(i,n) FOR(i,0,n)
typedef long long ll;
int main(){

	int n;
	cin >> n;
	vector<int> V,C;

	rep(i,n) {
		int a;
		cin >> a;
		V.push_back(a);
	}
	rep(i,n) {
		int b;
		cin >> b;
		C.push_back(b);
	}

	int ans = 0;
	rep(i,n) {
		if (V[i]>C[i]) {
			ans += V[i] - C[i];
		}
	}
	cout << ans << endl;
}