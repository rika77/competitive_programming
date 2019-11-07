#include<bits/stdc++.h>
using namespace std;
#define FOR(i,a,b) for (int i=(a);i<(b);i++)
#define rep(i,n) FOR(i,0,n)
typedef long long ll;
int main(){

	string s;
	cin >> s;

	bool flag = true;

	if (s[5] == '1') {
		flag = false;
	} else if (s[6] == '5' || s[6] == '6' || s[6] == '7' || s[6] == '8'||s[6] == '9') {
		flag = false;
	} 
	if (flag) {
		cout << "Heisei" << endl;
	} else {
		cout << "TBD" << endl;
	}
}