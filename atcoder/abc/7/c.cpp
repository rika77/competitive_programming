#include<iostream>
#include<cstdio>
#include<string>
#include<algorithm>
#include<vector>
#include<cmath>
#include<map>
#include<bitset>
#include<queue>
using namespace std;
#define FOR(i,a,b) for (int i=(a);i<(b);i++)
#define rep(i,n) FOR(i,0,n)
#define INF 10000
typedef long long ll;
int main(){
	int r,c,sx,sy,gx,gy;
	cin >> r>>c>>sx>>sy>>gx>>gy;
	sx--; sy--;
	int map[50][50] = {};
	typedef pair<int,int> P;
	queue<P> Q;
	char sub;
	int x[4]={1,0,-1,0};
	int y[4]={0,1,0,-1};

	rep(i,r){
	rep(j,c){
	cin >> sub;
	if (sub == '#') {
	map[i][j] = INF;
	}
	else {
	map[i][j] = -1;
	}
	}
	}

	Q.push(make_pair(sx,sy));
	map[sx][sy] = 0;
	while(!Q.empty()){
	P a = Q.front(); Q.pop();
	
	rep(i,4){
	int x_sub = a.first + x[i];
	int y_sub = a.second + y[i];
	if (-1==map[x_sub][y_sub]) {
	Q.push(P(x_sub,y_sub));
	map[x_sub][y_sub] = map[a.first][a.second] + 1;
	}
	}
	}
/*
	rep(i,r){
	rep(j,c){
	cout << map[i][j] << " ";
	}
	cout << endl;
	}
*/	

	cout << map[gx-1][gy-1]  << endl;
	return 0;
}
