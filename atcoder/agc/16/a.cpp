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

	map<char,int> m;
	rep(i,l){
		m[s[i]] = 1;
	}

	int mi = 100;
	for (auto &item: m){
		int ma = 0;
		int sub = 0;
		rep(i,l){
			if (s[i]==item.first){
				ma = max(ma,sub);
				sub = 0;	//reset
			}
			else if (i==l-1){
				sub++;
				ma = max(ma,sub);
			}
			else {
				sub++;
			}
		}
		mi = min(mi, ma);
	}

	cout << mi << endl;
}
