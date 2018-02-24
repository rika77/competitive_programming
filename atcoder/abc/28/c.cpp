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
	int a,b,c,d,e;
	cin >> a>>b>>c>>d>>e;

	int ma = max(b+c+e, a+d+e);
	cout << ma << endl;
	return 0;
}
