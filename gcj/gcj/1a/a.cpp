#include<bits/stdc++.h>
using namespace std;
#define FOR(i,a,b) for (int i=(a);i<(b);i++)
#define rep(i,n) FOR(i,0,n)
typedef long long ll;
typedef pair<string, string> Pi;
typedef pair<Pi, string> P;

// cout << "Case #" << z+1 << ": " << ans << endl;

string suf(string a, string b) {
	string ans;
	
	if (b.size() > a.size()) {
		swap(a,b);
	}
	int la = a.size();
	int lb = b.size();
	int l = lb;

	int save = 0;
	for(int i=l-1; i>=0;i--) {
		if (!(a[la-lb+i]==b[i])) {
			save = i+1;
			break;
		} 
	}
	ans = b.substr(save);
	return ans;
}

bool comp(const P& a, const P& b) {
	int la = a.second.size();
	int lb = b.second.size();
	return la > lb;
}

int main(){

	int t;
	cin >> t;
	rep(z,t){
		int n;
		cin >> n;
		vector<string> S;
		rep(i,n) {
			string str;
			cin >> str;
			S.push_back(str);
		}

		map<string,bool> Used;
		map<string,bool> visited;
		vector<P> V;
		rep(i,n) {
			for (int j=i+1; j<n;j++) {
				V.push_back(P
					(Pi(S[i], S[j]), suf(S[i],S[j]))
					);
			}
		}
		sort(V.begin(), V.end(), comp);
		// rep(i,(int)V.size()) {
		// 	cout << V[i].first.first << " "<< V[i].first.second << " " << V[i].second << endl;
		// }

		int ans = 0;
		for (ll i = 0; i < (ll)V.size(); i++) {
			string si = V[i].first.first;
			string sj = V[i].first.second;
			string suij = V[i].second;
			// Used怪しいか?
			if (!suij.empty()) {
				if (!visited[si] && !visited[sj] && !Used[suij]) {
					ans += 2;
					visited[si] = 1;
					visited[sj] = 1;
					Used[suij] = 1;
				}
			}
		}

		cout << "Case #" << z+1 << ": " << ans << endl;
	}}










