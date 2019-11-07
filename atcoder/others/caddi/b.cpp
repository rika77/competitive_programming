#include<bits/stdc++.h>
using namespace std;
#define FOR(i,a,b) for (int i=(a);i<(b);i++)
#define rep(i,n) FOR(i,0,n)
typedef long long ll;
int main(){

	int n,h,w;
	cin >> n>>h>>w;
	int cnt=0;
	rep(i,n){
		int a,b;
		cin >> a >> b;
		if (a>=h && b>=w) {
			cnt++;
		}
	}
	cout << cnt << endl;
	return 0;
}

