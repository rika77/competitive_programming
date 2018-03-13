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
	int n;
	int k;
	char d[9]={};
	cin >> n>>k;
	rep(i,k){
		cin >> d[i];
	}
	int ans;
	bool flag = 0;
	FOR(i,n,88889){
		flag = 0;
		//かぶるものがあればloopにとどまるcontinue;
		//なければbreakできる！
		string s = to_string(i);
		int len = s.size();
		rep(j,len){
			rep(m,k){
			if (s[j] == d[m]){
				flag = 1;
				break;
			}
			}
			if (flag){
				break;
			}
		}
		if (flag) continue;
		else {
			ans = i;
			break;
		}
	}
				
	cout << ans << endl;
	return 0;
}
