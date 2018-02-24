#include<iostream>
#include<cstdio>
#include<string>
#include<algorithm>
#include<vector>
#include<cmath>
#include<map>
#include<bitset>
using namespace std;
#define ll long long
#define MAX 100001

/*
int dp[MAX][MAX] = {};

void make(){
	for (int i=0;i<MAX;i+=2) {
	dp[0][i] = 1;
	}
	for (int i=1;i<MAX;i++) {
	for (int j=1;j<MAX;j++) {
	if (dp[i-1][j-1]==1 || dp[i+1][j-1]==1) {
	dp[i][j]=1;;
	}
	}
	}
}
*/

int main(){
	int n,t,x,y;
	cin >> n;
	int sum;
	for (int i=0;i<n;i++) {
	cin >> t>>x>>y;
	sum=x+y;
	if (!(t>=sum) || (t%2!=sum%2)) {
	cout << "No" <<endl;
	return 0;
	}
	}

	cout << "Yes" << endl;
	return 0;
}

