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
	int c[3][3]={};
	rep(i,3){
		rep(j,3){
			cin >>c[i][j];
			}
	}
	bool flag = 1;

	rep(i,2){
		if (c[i][0]-c[i+1][0]!=c[i][1]-c[i+1][1] || c[i][1]-c[i+1][1]!=c[i][2]-c[i+1][2]){
			flag = 0;
		}
	}

	rep(i,2){
		if (c[0][i]-c[0][i+1]!=c[1][i]-c[1][i+1] || c[1][i]-c[1][i+1]!=c[2][i]-c[2][i+1]){
			flag = 0;
		}
	}

	if(flag) cout << "Yes"<<endl;
	else cout << "No"<<endl;

	return 0;
}

