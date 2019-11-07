#include<bits/stdc++.h>
using namespace std;
#define FOR(i,a,b) for (int i=(a);i<(b);i++)
#define rep(i,n) FOR(i,0,n)
typedef long long ll;

// cout << "Case #" << z+1 << ": " << ans << endl;

bool is_desirable(int from, int to, vector<int> a) {
	FOR(i, from, to-1) {
		FOR(j, i+1, to) {
			FOR(k, j+1, to+1) {
				cout << a[i] << " " << a[j] << " " << a[k] << endl;
				if ((a[i]<a[j]&& a[j] > a[k]) || (a[i]>a[j]&& a[j] < a[k])) {
					return true;
				}
			}
		}
	}
	return false;
}

int main(){

	int t;
	cin >> t;
	rep(z,t){
		int k;
		vector<int> a;
		cin >> k;
		rep(i,k+1) {
			int x;
			cin >> x;
			a.push_back(x);
		}

		priority_queue<int, vector<int>, greater<int>> Q;
		Q.push(0);
		Q.push(k);
		int cnt = 0;
		while(!Q.empty()) {
			int from = Q.top(); Q.pop(); 
			int to = Q.top(); Q.pop(); 
			for (int i = from+2; i<to-1; i++) {
				if (is_desirable(from,i,a)&&is_desirable(i,to,a)) {
					Q.push(i);
					Q.push(from);
					Q.push(to);
					cnt++;
					break;
				}
			}
		}

	cout << "Case #" << z+1 << ": " << cnt << endl;
}
}

		

