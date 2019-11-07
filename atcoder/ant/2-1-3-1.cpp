#include<bits/stdc++.h>
using namespace std;
#define FOR(i,a,b) for (int i=(a);i<(b);i++)
#define rep(i,n) FOR(i,0,n)
#define INF 1000000
typedef long long ll;
typedef pair<int,int> P;

int dx[4]={1,0,-1,0};
int dy[4]={0,1,0,-1};

int main(){
	int r,c,sx,sy,gx,gy;
	cin >>r>>c>>sx>>sy>>gx>>gy;
	sx--; sy--; gx--; gy--;
	//char m[50][50] = {};
	int bfs[50][50] = {};
	char a;
	rep(i,r){
		rep(j,c){
			cin >> a;
	//		m[i][j] = a;
			if (a == '#') {
				bfs[i][j] = INF;
			}
			else {
				bfs[i][j] = -1;
			}
		}
	}

	//まずスタート地点はlen=0(bfs)で確定
	queue<P> Q;
	bfs[sx][sy] = 0;
	Q.push(P(sx,sy));

	while(!Q.empty()){
		P p = Q.front(); Q.pop();
		rep(i,4){
			int x = p.first + dx[i];
			int y = p.second + dy[i];
			if (x>=0 && x<r &&y>=0&&y<c&&bfs[x][y]==-1){
				Q.push(P(x,y));
				bfs[x][y] = bfs[p.first][p.second] + 1;
			}
		}
	}

	cout << bfs[gx][gy] << endl;
}
