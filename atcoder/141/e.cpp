#include<bits/stdc++.h>
using namespace std;
#define FOR(i,a,b) for (int i=(a);i<(b);i++)
#define rep(i,n) FOR(i,0,n)
typedef long long ll;

int main(){

	int n;
	string s;
	cin >> n>>s;

	map<char, int> M;

	bool flag = false;
	bool zero_flag = true;
	rep(i, n) {
		if (!M[s[i]]) {
			M[s[i]] = 1;
		} else {
			zero_flag = false;
			M[s[i]]++;
		}
	}

	if (zero_flag) {
		cout << "0" <<endl;
		return 0;
 	}

 	rep(i,n) {
 		for (int j = i+1;j<n;j++) {
 			if (M[s[i]]<=1) {
 				break;
 			}
 			if (s[i]==s[j]) {
 				// pipi
 			}
 		} 
 	}


