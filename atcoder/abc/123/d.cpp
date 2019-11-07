#include<bits/stdc++.h>
using namespace std;
#define FOR(i,a,b) for (int i=(a);i<(b);i++)
#define rep(i,n) FOR(i,0,n)
typedef long long ll;
int main(){
	int x,y,z,K;
	vector<ll> a(1000),b(1000),c(1000);

	cin >> x>>y>>z>>K;
	rep(i,x) {
		ll n;
		cin >> n;
		a.push_back(n);
	}
	rep(i,y) {
		ll n;
		cin >> n;
		b.push_back(n);
	}
	rep(i,z) {
		ll n;
		cin >> n;
		c.push_back(n);
	}

	sort(a.begin(), a.end(), greater<ll>());
	sort(b.begin(), b.end(), greater<ll>());
	sort(c.begin(), c.end(), greater<ll>());

	priority_queue<ll> Q;

	rep(i,x) {
		rep(j,y) {
			ll pro = (i+1)*(j+1);
			if (pro > K) {
				break;
			}
			rep(k,z) {
				if (pro*(k+1) > K) {
					break;	// 途中までだから、全部10^6の定数倍
				}
				// printf("%lld %lld %lld\n", a[i],b[j],c[k]);
				Q.push(a[i]+b[j]+c[k]);
			}
		}
	}

	rep(i, K) {
		ll q = Q.top(); Q.pop();
		cout << q << endl;
	}
}















