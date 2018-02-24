//排他的論理和xorを取る
//cout直接は怒られた
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

	int a,b;
	cin >> a >> b;
	a = a^b;
	cout << a << endl;
	return 0;
}
