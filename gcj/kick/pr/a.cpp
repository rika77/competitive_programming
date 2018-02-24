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
	int n,a,max_len;
	string s_sub,s,ans;
	cin >> n;
	rep(i,n){
	max_len = 0;
	ans = "";
	cin >> a; cin.ignore();
	rep(j,a){
	getline(cin,s_sub);
	s = s_sub;
	s.erase(remove(s.begin(),s.end(),' '),s.end());	//空白を取り除く
	sort(s.begin(),s.end());
	s.erase(unique(s.begin(),s.end()),s.end());
	int len = s.size();
	if(max_len == len && ans > s_sub) {
	ans = s_sub;
	continue;
	}
	if(max_len < len) {
	max_len = len;
	ans = s_sub;
	}
	}

	cout << "Case #" << i+1 << ": " << ans << endl;
	}
	
	return 0;
}
	
