#include<bits/stdc++.h>
using namespace std;
#define FOR(i,a,b) for (int i=(a);i<(b);i++)
#define rep(i,n) FOR(i,0,n)
typedef long long ll;
vector<int> V;

int sum(int beg, int end) {
	int ans = 0;
	for (int i=beg; i<end;i++) {
		ans += V[i];
	}
	return ans;
}

int main(){

	int n,k;
	string s;

	cin>>n>>k>>s;

	int cnt = 1;
	rep(i, (int)s.size()-1) {
		if (s[i]==s[i+1]) {
			cnt++;
		} else {
			V.push_back(cnt);
			cnt = 1;
		}
	}
	// どうせ最後のやつが挿入されていないので
	V.push_back(cnt);

	// rep(i, (int)V.size()) {
	// 	cout << V[i] << " ";
	// }

	int ma = 0;
	if (s[0]=='0') {
		ma = sum(0, min((int)V.size(), 2*k));
		for (int beg = 1; beg < (int)V.size(); beg+=2) {
			ma = max (ma, sum(beg, 
							  min(beg+2*k+1, (int)V.size())));
		}
	} else {
		for (int beg = 0; beg < (int)V.size(); beg+=2) {
			ma = max (ma, sum(beg, 
							  min(beg+2*k+1, (int)V.size())));
		}
	}

	cout << ma << endl;
}