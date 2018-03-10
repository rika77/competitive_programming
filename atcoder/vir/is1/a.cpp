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
	ll a;
	cin >> n;
	int ki=0;
	rep(i,n) {
		cin >> a;
		if (a%2) ki++;
	}

	if(n==1&&ki==1) {
		cout << "YES" << endl;
	}
	else if (ki%2==1) {
		cout << "NO" << endl;
	}
	else {
		cout << "YES" << endl;
	}

	return 0;
}
