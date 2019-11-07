#include<bits/stdc++.h>
using namespace std;
#define FOR(i,a,b) for (int i=(a);i<(b);i++)
#define rep(i,n) FOR(i,0,n)
typedef long long ll;
int main(){

	int n;
	int max_1 = 0;
	int max_2 = 0;
	int in_1 = 0;

	cin >> n;

	rep(i,n) {
		int a;
		cin >> a;
		if (a > max_1) {
			max_2 = max_1;
			max_1 = a;
			
			in_1 = i;
		} else if (a > max_2) {
			max_2 = a;
		}
	}

	rep(i,n) {
		if (i == in_1) {
			cout << max_2 << endl;
		} else {
			cout << max_1 << endl;
		}
	}

}

