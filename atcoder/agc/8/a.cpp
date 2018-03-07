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
//めちゃくちゃcorner caseという感じがする
int main(){
	ll x,y;
	cin >> x>>y;
	if ((x>=0&&y>0)||(x<0&&y<=0)){
		if (x<y) cout << y-x << endl;
		else cout << 2 + x - y << endl;
	}
	else {
		cout << 1 + abs(abs(x) - abs(y)) << endl;
	}
	return 0;
}
