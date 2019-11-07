#include<bits/stdc++.h>
using namespace std;
#define FOR(i,a,b) for (int i=(a);i<(b);i++)
#define rep(i,n) FOR(i,0,n)
typedef long long ll;

// cout << "Case #" << i+1 << ": " << ans << endl;


bool bwith(string lo, string sh) {
	// loがshで始まるならばtrueを返す
	rep(i, (int)sh.size()) {
		if (lo[i] != sh[i]) {
			return false;
		}
	}
	return true;
}

vector<string> sel(vector<string> S) {
	// Sで重複があれば、消す
	// 1. 長さ順でsortする
	// 2. S[1]以降のものについて、自分より短いものから始まることがあれば、そいつは加えない
	// 返すやつ
	sort(S.begin(), S.end());
	vector<string> R;
	R.push_back(S[0]);
	FOR(i, 1, (int)S.size()) {
		bool flag = true;
		rep(j, i) {
			if (bwith(S[i], S[j])) {
				flag = false;
				break;
			}
		}
		if (flag) {
			R.push_back(S[i]);
		}
	}
	return R;
}


int main(){

	int t;
	cin >> t;
	rep(l,t){
		ll N, P;
		cin >> N >> P;
		vector<string> S;
		rep(i, P) {
			string str;
			cin >> str;
			S.push_back(str);
		}
		S = sel(S);
		ll ans = pow(2.0, N);
		rep(i, (int)S.size()) {
			ans -= pow(2.0, N - ll(S[i].size()));
		}
		cout << "Case #" << l+1 << ": " << ans << endl;
	}
	return 0;
}

