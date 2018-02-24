#include<iostream>
#include<cstdio>
#include<string>
#include<algorithm>
#include<vector>
#include<cmath>
#include<map>
#include<bitset>
#include<queue>
#include<set>
using namespace std;
#define FOR(i,a,b) for (int i=(a);i<(b);i++)
#define rep(i,n) FOR(i,0,n)
#define INF 10000
typedef long long ll;
int main(){
	int h,w;
	int d_cnt=0;

	cin>>h>>w;
	int map[52][52]={};
	typedef pair<int,int> P;
	queue<P> Q;
	int x[4]={1,0,-1,0};
	int y[4]={0,1,0,-1};
	char sub;

	rep(i,h){
		rep(j,w){
			cin >> sub;
			if (sub=='.') {
				d_cnt++;
				map[i][j]=-1;
			}
			else {
				map[i][j]=INF;
			}
		}
	}

	Q.push(make_pair(0,0));
	map[0][0]=1;
	while(!Q.empty()){
		P a = Q.front(); Q.pop();

		rep(i,4){
			int x_sub = a.first + x[i];
			int y_sub = a.second + y[i];
			if (x_sub>=0 &&x_sub<h &&y_sub >=0&& y_sub<w){
			if (-1==map[x_sub][y_sub]){
				Q.push(P(x_sub,y_sub));
				map[x_sub][y_sub] = map[a.first][a.second]+1;
				if (x_sub == h-1 &&y_sub == w-1) break;
			}
			}
		}
	}
/*
	rep(i,h){
		rep(j,w){
			cout << map[i][j] << " ";
		}
		cout << endl;
	}
*/
	int mahi = map[h-1][w-1];
	cout << (mahi == -1 ? -1 : (d_cnt - mahi)) << endl;
	return 0;
}

