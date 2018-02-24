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

//substrの使い方

int main(){
	string a,b;
	cin >> a;
	string sub = a.substr(3);	//a自体には変更を加えない
	//substrの使い方
	cout << sub<< endl;	//substr(i); i文字から最後まoで

	return 0;
}
