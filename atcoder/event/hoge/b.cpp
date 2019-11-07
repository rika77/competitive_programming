#include<bits/stdc++.h>
using namespace std;
#define FOR(i,a,b) for (int i=(a);i<(b);i++)
#define rep(i,n) FOR(i,0,n)
typedef long long ll;
typedef pair<ll, ll> P;
int main(){
	int n;
	cin >> n;
	vector<P> V(51);

	rep(i,n) {
		ll x, y;
		cin >> x >> y;
		V[i] = P(x,y);
	}

	map<P, int> M;
	rep(i,n) {
		for(int j = i+1; j<n;j++) {
			ll difx = V[j].first - V[i].first;
			ll dify = V[j].second - V[i].second;
			if (M[P(difx,dify)]) {
				M[P(difx,dify)]++;
			} else {
				M[P(difx,dify)] = 1;
			}
		}
	}

	int ma = 0;

	for (auto &item: M) {
		if (item.first.first == 0 && item.first.second == 0) {
			continue;
		}
        if (ma < item.second) {
        	ma = item.second;
        }
	}

	cout << n - ma << endl;
}



