#include<bits/stdc++.h>
using namespace std;
#define FOR(i,a,b) for (int i=(a);i<(b);i++)
#define rep(i,n) FOR(i,0,n)
typedef long long ll;

char m[10][10] = {};
int v[10][10] = {};
bool flag = false;
int num = 1;

int vx[4]={1,0,-1,0};
int vy[4]={0,1,0,-1};
int cnt = 0;
void dfs(int x, int y){
	//連結部分を数える
	//
	//visited
//	cout << x<< " " << y << " " << cnt << endl;
	if (v[x][y]) return;

	v[x][y] = 1;
	cnt++;
	if (cnt == num) {
		flag = true;
		return;
	}
	rep(i,4){
		int dx = x + vx[i];
		int dy = y + vy[i];

		if (dx>=0&&dx<10&&dy>=0&&dy<10&&m[dx][dy]=='o') {
			dfs(dx,dy);
		}
	}
}


int main(){
	char a;
	int sx=11, sy=11;

	rep(i,10){
		rep(j,10){
			cin >> a;
			m[i][j] = a;
			if (a == 'o') {
				num++;
			}
			if (sx == 11 && a == 'o'){
				sx = i;
				sy = j;
			}
		}
	}
	
	rep(i,10){
		rep(j,10){
			if (m[i][j]=='x') {
				//そこをoに変えて
				//あとで戻すぞ
				m[i][j]='o';
				rep(k,10){
					rep(l,10){
						v[k][l] = 0;
					}
				}
				cnt = 0;
				dfs(sx,sy);
				if (cnt==num) {
					cout << "YES" << endl;
					return 0;
				}
				m[i][j]='x';
			}
		}
	}
	

	cout << "NO" << endl;
}
