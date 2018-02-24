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

// cout << "Case #" << i+1 << ": " << ans << endl;
int main(){
	int t;
	cin >> t;
	rep(i,t){
	int d,n;
	cin >> d >> n;
	cout << "Case #" << i+1 << ": "<< endl;
	int cnt,one;
	if (n<=24) {
		if (n%2 == 0) {
		cnt = n/2;
		rep(j,cnt) {cout << "I/O/";}
		cout << "I" << endl;
		}
		else {
		cnt = n/2 + 1;
		rep(j,cnt) {cout << "I/O/";}
		cout << endl;
		}
	}

	else {
	int row = (n/24) * 2 + 1;
	int rest = n % 24;
	
	rep(j,row) {
	if (j%2==0 && j!=row-1) {
		rep(k,12){cout << "I/O/";}
		cout << "I/" << endl;
		}
	else if (j!=row-1){
		rep(k,50) {cout << "I";}
		cout << endl;
		}
	else {
	if (rest%2 == 0) {
		cnt = rest/2;
		one = 50 - cnt*4 -1;
		rep(j,cnt) {cout << "I/O/";}
                cout << "I";
		rep(j,one) {cout << "I";}
		cout << endl;
		}
	else {
		cnt = rest/2 + 1;
		one = 50 - cnt*4;
		rep(j,cnt) {cout << "I/O/";}
		rep(j,one) {cout << "O";}
		cout << endl;
	}
	}
	}
	}
	}
	return 0;
}
