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
typedef long long ll;
int main(){
	int r,c;
	char a;
	int cnt = 0;
	cin >> r>>c;
	int map[r][c];
	rep(i,r){
	rep(j,c){
	cin >>a;
	if (a=='*') map[i][j]=1;
	else map[i][j]=0;
	}
	}

	rep(i,r){
	rep(j,c){
	if (!map[i][j]){
	map[i][j]=1;
	if (j>0) map[i][j-1]=1;
	if (j<c-1) map[i][j+1]=1;
	if (i>0) map[i-1][j]=1;
	if (i<r-1) map[i+1][j]=1;
	cnt++;
	}
	}
	}

	cout << cnt << endl;
	return 0;
}
