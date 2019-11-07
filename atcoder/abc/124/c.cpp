#include<bits/stdc++.h>
using namespace std;
#define FOR(i,a,b) for (int i=(a);i<(b);i++)
#define rep(i,n) FOR(i,0,n)
typedef long long ll;

int main(){

	string s;
	cin >> s;
	int n = s.size();

	string sample0, sample1;
	sample1.reserve(100002);
	sample0.reserve(100002);


	rep(i,n/2) {
		sample0+="01";
	}
	if (n%2) {
		sample0+="0";
	}

	rep(i,n/2) {
		sample1+="10";
	}
	if (n%2) {
		sample1+="1";
	}

	int dif0=0, dif1=0;

	rep(i,n) {
		if (s[i]!=sample0[i]) {
			dif0++;
		}
		if (s[i]!=sample1[i]) {
			dif1++;
		}
	}

	cout << min(dif0, dif1) << endl;
}