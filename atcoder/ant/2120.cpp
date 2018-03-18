#include<bits/stdc++.h>
using namespace std;
#define FOR(i,a,b) for (int i=(a);i<(b);i++)
#define rep(i,n) FOR(i,0,n)
typedef long long ll;

int vx[4] = {1,0,-1,0};
int vy[4] = {0,1,0,-1};
bool flag = false;
int h,w;
char m[500][500] = {};

void dfs(int x, int y){
/*	rep(i,h){
		rep(j,w){
			cout << m[i][j];
		}
		cout << endl;
	}

	cout << x << " " << y << endl;
*/
	if (m[x][y] == 'g'){
		flag = true;
		return;
	}
	//もう行けなくする
	m[x][y] = '#';
	rep(i,4){
		int dx = x + vx[i];
		int dy = y + vy[i];

		if (dx >= 0 && dx < h && dy >= 0 && dy < w && m[dx][dy]!='#') {
			dfs(dx,dy);
		}
	}
}
int main(){
	cin >> h >> w;
	char a;
	int sx,sy;
	rep(i,h){
		rep(j,w){
			cin >> a;
			if (a == 's'){
				sx = i;
				sy = j;
			}
			else {
				m[i][j] = a;
			}
		}
	}

	dfs(sx,sy);
	if (flag) {
		cout << "Yes" << endl;
	}
	else {
		cout << "No" << endl;
	}

}


	

