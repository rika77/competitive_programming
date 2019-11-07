#include<bits/stdc++.h>
using namespace std;
#define FOR(i,a,b) for (int i=(a);i<(b);i++)
#define rep(i,n) FOR(i,0,n)
typedef long long ll;

// cout << "Case #" << z+1 << ": " << ans << endl;

int main(){

	int t;
	cin >> t;
	rep(z,t){
		int n,k;
		cin >> n >>k;
		priority_queue<int, vector<int>, greater<int>> Q;

		rep(i,n) {
			int a;
			cin >> a;
			Q.push(a);
		}

		// n+1まででいいのかは怪しいが十分だろう
		int cnt = 0;
		int day = 1;
		while(!Q.empty()) {
			int kk = k;
			while(kk>0 && !Q.empty()) {
				int a = Q.top(); Q.pop();
				if (a>=day) {
					cnt++;
					kk--;
				}
			}
			day++;
		}

		cout << "Case #" << z+1 << ": " << cnt << endl;
	}
}

// priority_queueは降順に入れてくれる(sortしなくても！)
// priority_queue<int, vector<int>, greater<int>> を使うと昇順

// frontのかわりにtopを使う
// コードが減らせて良い


