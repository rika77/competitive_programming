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
#define MAX 100001
typedef long long ll;
int main(){
	int n;
	cin >> n;
	int a;
	int A[MAX] = {};

	rep(i,n){
		cin >> a;
		A[a]++;
	}

	int ma = 0;
	rep(i,MAX-2){
		int sub = A[i]+A[i+1]+A[i+2];
		ma = max(ma,sub);
	}
	cout << ma << endl;
	return 0;
}
