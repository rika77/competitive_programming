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

	// 数をかけてKまで減らす
	int an =1, bn=1, cn=1;	// 1-index (個数)
	int i=1,j=1,k=1;	// 0-index (iterater)

	while(1) {
		// 最初から1要素しかないときは?
		ll A=0,B=0,C=0;
		if (i<x) {
			A = a[i];
		} 
		if (j<y) {
			B = b[j];
		} 
		if (k<z) {
			C = c[k];
		} 

		// cout << A<<" " << B << " " << C << endl; 
		ll ma = max({A,B,C});

		if (ma==A) {
			an++;
			i++;
		} else if (ma==B) {
			bn++;
			j++;
		} else {
			cn++;
			k++;
		}

		if (an*bn*cn >= 10000) {
			break;
		}
	}

	// cout << an<<bn<<cn<<endl;
	// A+B;
	rep(i, an) {
		rep(j, bn) {
			rep(k, cn) {
				Q.push(a[i]+b[j]+c[k]);	// priority_queueはpushです
			}
		}
	}

	rep(i, K) {
		ll X = Q.top(); Q.pop();
		cout << X << endl;
	}
}















