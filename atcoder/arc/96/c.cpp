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
	int a,b,c,x,y;
	int a_an,b_an,c_an;
	cin >> a>>b>>c>>x>>y;
	ll mi = 10000000000;
	int tem;
	rep(i,x+1){
		c_an = (x - i) * 2;
		b_an = max(0,y - x + i);
		tem = i * a + b_an * b + c_an * c;
		if (mi > tem) {
			mi = tem;
			a_an = i;
		//	cout << a_an << " " << b_an << " " << c_an << endl;
		}
	}
	rep(i,y+1){
		c_an = (y - i) * 2;
		a_an = max(0, x - y + i);
		tem = i * b+a_an * a+c_an * c;
		if (mi > tem) {
			mi = tem;
			b_an = i;
		//	cout << a_an << " " << b_an << " " << c_an << endl;
		}
	}

	cout << mi << endl;
	return 0;
}

