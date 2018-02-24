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
typedef long long ll;
int main(){
	string a;
	cin >> a;
	bool flag = 0;
	bool flag2 = 0;
	//すべて9ならflag=0のまま
	//先頭のみ!9であと9なら
	if (a[0]=='9') flag2 = 1;
	FOR(i,1,a.size()){
		if (a[i]!='9') flag = 1;
	}
	if (!flag2 && !flag) {
		cout << a[0] - '0' + 9*(a.size()-1) << endl;
	}
	else if (!flag){
	cout << 9*a.size() << endl;
	}
	else {
	cout << a[0] - '1' + 9*(a.size()-1) << endl;
	}
	return 0;
}




































































































