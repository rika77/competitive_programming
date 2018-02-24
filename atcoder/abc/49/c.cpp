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
bool flag = 0;
void solve(string a){
	if (a == "") flag = 1;
	if (a[0]=='d') {
		solve(a.substr(1));
	}
	if (a.substr(0,2) == "der") {
		solve(a.substr(3));
	}
	if (a.substr(0,2)=="ere"){
		solve(a.substr(3));
	}
	if (a.substr(0,3)=="erer"){
		solve(a.substr(4));
	}
	flag = 0;
}
		
int main(){
	string s;
	cin >> s;
	s.replace(s.begin(),s.end(),"ream","");
	s.replace(s.begin(),s.end(),"as","");
	solve(s);
	if (flag) cout << "YES"<<"\n";
	else cout << "NO"<<"\n";

	return 0;
}
	
