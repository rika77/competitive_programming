#include<bits/stdc++.h>
using namespace std;
#define FOR(i,a,b) for (int i=(a);i<(b);i++)
#define rep(i,n) FOR(i,0,n)
typedef long long ll;
int main(){

	int n;
	cin >> n;
	double ans = 0;

	rep(i,n) {
		double a;
		string b;
		cin >> a >> b;
		if (b == "JPY") {
			ans += a;
		} else {
			ans += a*380000;
		}
	}

	cout << ans << endl;
}