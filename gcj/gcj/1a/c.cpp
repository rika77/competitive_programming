#include<bits/stdc++.h>
using namespace std;
#define FOR(i,a,b) for (int i=(a);i<(b);i++)
#define rep(i,n) FOR(i,0,n)
typedef long long ll;
typedef pair<int, int> P;
// cout << "Case #" << z+1 << ": " << ans << endl;

int r,c;
bool ok(int x, int y, int bx, int by) {
	if (x == bx || y==by) {
		return false;
	}
	if (x-y==bx-by) {
		return false;
	}
	if (x+y==bx+by) {
		return false;
	}
	return true;
}


int main(){

	int t;
	cin >> t;
	rep(z,t){
		cin >> r>>c;
		vector<P> ans;
		ans.push_back(P(0,0));
		int ite = 0;
		int visited[21][21] = {};
		
		visited[0][0] = 1;
		while(!((int)ans.size()==r*c)) {
			P item = ans[ite];
			P best = {-1,-1};
			bool flag = true;
			rep(i,r) {
				rep(j,c) {
					if (visited[i][j]) {
						continue;
					}
					if (item.first==i || item.second==j) {
						continue;
					}
					if (item.first-item.second==i-j) {
						continue;
					}
					if (item.first+item.second==i+j) {
						continue;
					}
					if (best.first==-1) {
						best.first = i;
						best.second = j;
					} else {
						// diffが小さい方
						if (abs(i-item.first)+abs(j-item.second)
							<abs(best.first-item.first)+abs(best.second-item.second)) {
							best.first = i;
							best.second = j;
						}
					}
					flag = false;
					// cout << i << " " << j << endl;
				}
			}
			if (!flag) {
				ans.push_back(best);
				ite++;
				visited[best.first][best.second] = 1;
			}

			if (flag) {
				break;
				// 行くところなかったらbreak;
			}
			
		}

		if ((int)ans.size() == r*c) {
			// OK
			cout << "Case #" << z+1 << ": POSSIBLE" << endl;
			rep(i,(int)ans.size()) {
				cout << ans[i].first +1 << " " << ans[i].second+1 << endl;
			}
		} else {
			// あとで消す
			rep(i,(int)ans.size()) {
				cout << ans[i].first +1 << " " << ans[i].second+1 << endl;
			}
			cout << "Case #" << z+1 << ": IMPOSSIBLE" << endl;

		}
	}
}
