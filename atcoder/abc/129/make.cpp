#include<bits/stdc++.h>
using namespace std;
#define FOR(i,a,b) for (int i=(a);i<(b);i++)
#define rep(i,n) FOR(i,0,n)
typedef long long ll;
int main(){

	cout << "2000 2000" << endl;
	rep(i,2000) {
		if (i%2) {
			rep(j,1000) {
				cout << ".#";
			}
		} else {
			rep(j,1000) {
				cout << "#.";
			}
		}
		cout << endl;
	}

}
