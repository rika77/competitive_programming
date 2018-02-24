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
	string sd,t;
	cin >> sd >> t;
	string mi = "{";
	rep(i,sd.size()-t.size()+1){
		string s(sd);	//copy
		bool flag = 1;	//合致できる前提
		FOR(j,i,i+t.size()){
			if(sd[j]=='?'){
				s[j]=t[j-i];
			}
			else if(sd[j]!=t[j-i]){
				flag = 0;	//駄目です
				break;
			}
			}
		if (!flag){
			continue;
		}
		//合致する感じなのでいいです！miと比較する準備
		rep(j,s.size()){
			if(s[j]=='?'){
				s[j]='a';
			}
		}
		mi = min(mi,s);
	}
		cout << (mi == "{" ? "UNRESTORABLE" : mi) <<"\n";
		return 0;
	}
