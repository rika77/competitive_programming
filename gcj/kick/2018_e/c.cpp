#include<bits/stdc++.h>
using namespace std;
#define FOR(i,a,b) for (int i=(a);i<(b);i++)
#define rep(i,n) FOR(i,0,n)
typedef long long ll;
typedef pair<int, string> P;

// cout << "Case #" << z+1 << ": " << ans << endl;

bool operator > (const P &p1, const P &p2) {
	return p1.first > p2.first;
}

int main(){

	int t;
	cin >> t;
	rep(z,t){
		
		// for temp use
		priority_queue<P, vector<P>, greater<P>> T;

		vector<int> c0(101);
		vector<int> c1(101);
		unordered_map<string, bool> M;

		int n,m,p;
		cin >> n >> m >> p;

		rep(i,n) {
			string a;
			cin >> a;
			rep(j,p) {
				if (a[j]=='1') {
					c0[j]++;
				} else {
					c1[j]++;
				}
			}
		}

		// Forbiddens
		rep(i,m) {
			string a;
			cin >> a;
			M[a]=1;
		}

		T.push(P(c0[0], "0"));
		T.push(P(c1[0], "1"));

		priority_queue<P, vector<P>, greater<P>> A;

		FOR(i, 1, p) {
			priority_queue<P, vector<P>, greater<P>> A;
			while(!T.empty()) {
				P p = T.top(); T.pop();
				A.push(P(p.first+c0[i], p.second+"0"));
				A.push(P(p.first+c1[i], p.second+"1"));
			}
			// priority_queueは後ろから出すのは出来ないのか、、、
			rep(i,102) {
				if (A.empty()) {
					break;
				}
				P p = A.top(); A.pop();
				T.push(p);
			}
		}

		// while(!T.empty()) {
		// 	P p = T.top(); T.pop();
		// 	cout << p.first << " " << p.second << endl;
		// }

		int ans;
		while(!T.empty()) {
			P p = T.top(); T.pop();
			if (!M[p.second]) {
				//cout << p.second << endl;
				ans = p.first;
				break;
			}
		}

		cout << "Case #" << z+1 << ": " << ans << endl;

	}

}

// queue での2^nをマスターしつつありますね！




















