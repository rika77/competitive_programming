#include<bits/stdc++.h>
using namespace std;
#define FOR(i,a,b) for (int i=(a);i<(b);i++)
#define rep(i,n) FOR(i,0,n)
typedef long long ll;
int main(){
	int D;
	cin >> D;
	string eve;
	rep(i, 25 - D) {
		eve += " Eve";
	}
	cout << "Christmas" + eve<< endl;
	return 0;
}