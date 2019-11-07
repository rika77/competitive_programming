#include<bits/stdc++.h>
using namespace std;
#define FOR(i,a,b) for (int i=(a);i<(b);i++)
#define rep(i,n) FOR(i,0,n)
typedef long long ll;

	int h,w;

	string s[2002] = {};

	vector<int> brokx[2002];
	vector<int> broky[2002];

int count_yoko(int x, int y) {


	if (brokx[x].size() == 0) {
		return w;
	}
	auto iter = lower_bound(brokx[x].begin(), brokx[x].end(), y);
	if (iter == brokx[x].begin()) {
		return brokx[x][0];
	} else if (iter == brokx[x].end()) {
		return w - *(iter-1) -1;
	} else {
		return *iter - *(iter-1) - 1; 
	}


}

int count_tate(int x, int y) {

	if (broky[y].size() == 0) {
		return h;
	}
	auto iter = lower_bound(broky[y].begin(), broky[y].end(), x);
	if (iter == broky[y].begin()) {
		return broky[y][0];
	} else if (iter == broky[y].end()) {
		return h - *(iter-1) -1;
	} else {
		return *iter - *(iter-1) - 1; 
	}


}

int main(){

	cin >> h>> w;

	rep(i,h) {
		cin >> s[i];
		// brok[i].push_back(-1);
		rep(j,w) {
			if (s[i][j] == '#') {
				brokx[i].push_back(j);
				broky[j].push_back(i);

			}
		}
	}

	int cnt = 0;
	

	rep(i,h) {
		rep(j,w) {
			if (s[i][j] == '#') {
				continue;
			}
			cnt = max(cnt, count_tate(i,j) + count_yoko(i,j) -1);
			if (cnt == h+w-1) {
				break;
			}
		}
	}

	cout << cnt << endl;
}