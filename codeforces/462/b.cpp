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
	int k;
	cin >>k;
	if (k>36){
	cout << "-1" << endl;
	}
	else{
	int q = k/2;
	int r = k%2;

	rep(i,q){
	cout << "8";
	}
	rep(i,r){
	cout << "4";
	}
	cout << endl;
	}
	return 0;
}
