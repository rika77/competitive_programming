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
	int n;
	cin >> n;
	//すべて10の倍数だった場合にも対応
	int sub=0;
	int a;
	int mi=101;
	bool flag = 0;
	rep(i,n){
		cin >> a;
		sub += a;
		if (a%10) {
			flag = 1;
			mi = min(mi,a);
		}
	}
	if (sub%10) {
		cout << sub << endl;
	}
	else if (!flag) {
		cout << "0" << endl;
	}
	else {
		cout << sub - mi << endl;
	}
	return 0;
}
