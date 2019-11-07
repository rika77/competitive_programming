#include<bits/stdc++.h>
using namespace std;
#define FOR(i,a,b) for (int i=(a);i<(b);i++)
#define rep(i,n) FOR(i,0,n)
typedef long long ll;
int main(){

	int a,b;
	cin >> a>>b;

	int a1 = a + a-1;
	int a2 = a + b;
	int a3 = b + b-1;

	cout << max({a1,a2,a3}) << endl;
}
