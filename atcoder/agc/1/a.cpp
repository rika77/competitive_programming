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
	int a;
	cin >> n;
	vector<int> v;
	rep(i,2*n){
		cin >> a;
		v.push_back(a);
	}
	sort(v.begin(),v.end());
	reverse(v.begin(),v.end());
	int cnt =0;
	for(int i=1;i<2*n;i+=2){
		cnt += v[i];
	}
	cout << cnt << endl;
	return 0;
}
