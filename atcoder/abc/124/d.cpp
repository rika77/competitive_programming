#include<bits/stdc++.h>
using namespace std;
#define FOR(i,a,b) for (int i=(a);i<(b);i++)
#define rep(i,n) FOR(i,0,n)
typedef long long ll;



int main(){
	int n,k;
	string s;
	cin >> n>>k>>s;

	

	int cnt = 1;

	rep(i,n-1) {
		if (s[i+1]==s[i]) {
			cnt++;
		} else {
			V.push_back(cnt);
			cnt = 1;
		}
	}
	V.push_back(cnt);
	// rep(i, (int)V.size()) {
	// 	cout << V[i] << " ";
	// }


	int ma = 0;

	if (s[0]=='1') {
		for (int beg=0; beg<(int)V.size(); beg+=2) {
			int end = min((int)V.size()-1, beg+2*k);
			int tem = 0;
			for (int i = beg; i<=end; i++) {
				tem+=V[i];
			} 
			ma = max(tem, ma);
		}
	} else {
		int en = min((int)V.size()-1, 2*k-1);
		for (int i = 0; i<=en;i++) {
			ma+=V[i];
		}

		for (int beg=1; beg<(int)V.size(); beg+=2) {
			int end = min((int)V.size()-1, beg+2*k);
			int tem = 0;
			for (int i = beg; i<=end; i++) {
				tem+=V[i];
			} 
			ma = max(tem, ma);
		}
	}

	cout << ma << endl;
}

