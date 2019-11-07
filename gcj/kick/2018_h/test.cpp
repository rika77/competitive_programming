#include<bits/stdc++.h>
using namespace std;
#define FOR(i,a,b) for (int i=(a);i<(b);i++)
#define rep(i,n) FOR(i,0,n)
typedef long long ll;

// cout << "Case #" << i+1 << ": " << ans << endl;

int N, P;

queue<string> make() {

	queue<string> Q;
	Q.push("R");
	Q.push("B");

	while((int)Q.size() != (int)pow(2.0, N)) {
		string item = Q.front(); Q.pop();
		Q.push(item+"R");
		Q.push(item+"B");
	}

	return Q;
}

bool comp(string lon, string sho) {
	// return true if lon begins with sho
	bool flag = true;
	rep(i, (int)sho.size()) {
		if (lon[i] != sho[i]) {
			flag = false;
			return false;
		}
	}
	return flag;
}

bool vcomp(string lon, vector<string> S) {
	// lonがSのどれでも始まらなかったら return true
	bool flag = true;
	rep(i, (int)S.size()) {
		if (comp(lon, S[i])) {
			flag = false;
			return false;
		}
	}
	return flag;
}

int main(){

	int t;
	cin >> t;
	rep(i,t){
		cin >> N >> P;
		vector<string> fbd;
		rep(j, P) {
			string f;
			cin >> f;
			fbd.push_back(f);
		}

		queue<string> Q = make();
		vector<string> SUB;

		while(!Q.empty()) {
			string q = Q.front(); Q.pop();
			SUB.push_back(q);
		} 

		int cnt = 0;
		rep(j, (int)SUB.size()) {
			if (vcomp(SUB[j], fbd)) {
				cnt++;
			}
		}
		cout << "Case #" << i+1 << ": " << cnt  << endl;
	}
	return 0;
}
