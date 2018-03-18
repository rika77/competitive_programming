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
	string s;
	cin >> s;
	int l = s.size();
	bool flag;	//Bなら0, Wなら1
	if (s[0]=='B') flag = 0;
	else flag = 1;

	int cnt = 0;
	FOR(i,1,l){
		if (s[i]=='B' && flag) {
			cnt++;
			flag = 0;
		}
		else if (s[i]=='W' && !flag) {
			cnt++;
			flag = 1;
		}
	}

	cout << cnt << endl;
	return 0;
}
