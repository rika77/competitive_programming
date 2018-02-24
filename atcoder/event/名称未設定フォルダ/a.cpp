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
	string a,b;
	cin >> a>>b;
	if (a[0]=='S' && b[0]=='H') cout << "YES" <<endl;
	else cout << "NO" << endl;

	return 0;
}
