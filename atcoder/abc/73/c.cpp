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
	cin >> n;
	map<int,int> M;
	int a;
	rep(i,n){
		cin >> a;
		++M[a];
	}
	int cnt = 0;
	for(auto &item: M) {
		if(item.second%2) {
			cnt++;
		}
	}
	cout << cnt << endl;
	return 0;
}

