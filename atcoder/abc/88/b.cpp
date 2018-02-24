#include<iostream>
#include<cstdio>
#include<string>
#include<algorithm>
#include<vector>
#include<cmath>
#include<map>
#include<bitset>
#include<queue>
#include<set>
using namespace std;
#define FOR(i,a,b) for (int i=(a);i<(b);i++)
#define rep(i,n) FOR(i,0,n)
typedef long long ll;
int main(){
	int n;
	cin >> n;
	vector<int> v;

	int a;
	rep(i,n){
		cin >> a;
		v.push_back(a);
	}
	sort(v.begin(),v.end());
	reverse(v.begin(),v.end());
	int sum = 0;
	rep(i,n){
		if(i%2==0) sum+=v[i];
		else sum -=v[i];
	}

	cout << sum << endl;
	return 0;
}
