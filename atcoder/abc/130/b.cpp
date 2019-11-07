#include<bits/stdc++.h>
using namespace std;
#define FOR(i,a,b) for (int i=(a);i<(b);i++)
#define rep(i,n) FOR(i,0,n)
typedef long long ll;
int main(){

	int n,x;
	cin >> n>> x;
	
	int sum = 0;
	int cnt = n;
	rep(i,n) {
		int l;
		cin >> l;
		sum += l;
		if (sum > x) {
			cnt = i;
			break;
		}
	}
	
	cout << min(n+1, cnt+1) << endl;
}