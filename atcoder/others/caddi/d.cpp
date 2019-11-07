#include<bits/stdc++.h>
using namespace std;
#define FOR(i,a,b) for (int i=(a);i<(b);i++)
#define rep(i,n) FOR(i,0,n)
typedef long long ll;
int main(){

	int n;
	cin >> n;
	bool flag = 0;
	rep(i,n) {
		int a; 
		cin >> a;
		if (a%2 == 1) {
			flag = 1;
			break;
		}
	}

	if (flag) {
		cout << "first" << endl;
	} else {
		cout << "second" << endl;
	}
	return 0;
}

