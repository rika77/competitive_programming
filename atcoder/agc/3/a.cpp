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
	m['S']=m['N']=m['W']=m['E']=0;
	rep(i,l){
		m[s[i]]=1;
	}

	if ((m['S']^m['N'])||(m['W']^m['E'])){
		cout << "No" << endl;
	}
	else cout << "Yes" << endl;
	return 0;
}

