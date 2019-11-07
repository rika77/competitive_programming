#include<bits/stdc++.h>
using namespace std;
#define FOR(i,a,b) for (int i=(a);i<(b);i++)
#define rep(i,n) FOR(i,0,n)
typedef long long ll;
int main(){

	int n,k;
	cin >> n >> k;
	vector<int> h;
	rep(i,n) {
		int a;
		cin >> a;
		h.push_back(a);
	}

	sort(h.begin(), h.end());

	int mi = 2e9;
	rep(i,n-k+1) {
		mi = min(mi, h[k-1+i] - h[i]);
	}

	cout << mi << endl;
	return 0;
}