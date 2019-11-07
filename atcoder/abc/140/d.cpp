#include<bits/stdc++.h>
using namespace std;
#define FOR(i,a,b) for (int i=(a);i<(b);i++)
#define rep(i,n) FOR(i,0,n)
typedef long long ll;

int main(){

	int n,k;
	string s;
	cin >> n >> k >> s;

	int numOfGroup = 0;
	char be = s[0];
	for (int i=1;i<n; i++) {
		if (s[i] == be) {
			continue;
		}
		numOfGroup++;
		be = s[i];
	}
	if (be == s[n-1]) {
		numOfGroup++;
	}

	numOfGroup = max(1, numOfGroup-2*k);
	cout << n - numOfGroup << endl;
}
