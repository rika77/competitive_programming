#include<bits/stdc++.h>
using namespace std;
#define FOR(i,a,b) for (int i=(a);i<(b);i++)
#define rep(i,n) FOR(i,0,n)
typedef long long ll;
int main(){

	ll w,h,x,y;
	cin >> w>>h>>x>>y;


	int flag = 0;
	if (w%2==0 && h%2 == 0 && x == w/2 && y == h/2) {
		flag = 1;
	}

	cout << w*h/2.0 << " " << flag << endl;
}


