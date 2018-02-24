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
#define MAX 1000002
typedef long long ll;
int main(){
	//imos method
	int n;
	cin >> n;
	int map[MAX]={};

	int a,b;
	rep(i,n){
		cin >> a>>b;
		map[a]++;
		map[b+1]--;
	}
	int ma=map[0];
	FOR(i,1,MAX-1){
		map[i]+=map[i-1];
		ma = max(ma,map[i]);
	}

	cout << ma << endl;
	return 0;
}

//imos method に限らないかもしれないけど、map[0]も見ようね。
