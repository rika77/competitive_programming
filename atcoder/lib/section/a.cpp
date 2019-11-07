#include<bits/stdc++.h>
using namespace std;
#define FOR(i,a,b) for (int i=(a);i<(b);i++)
#define rep(i,n) FOR(i,0,n)
typedef long long ll;
int main(){
	int t;
	cin >> t;
	rep(i, t) {
		int j = 0;
		string str;
		cin >> str;
		int cnt = 0;

		while(j < (int)str.size()) {

			if (str.substr(j, 5) == "tokyo") {
				cnt++;
				j += 5;
			}
			else if (str.substr(j, 5) == "kyoto") {
				cnt++;
				j += 5;
			}
			else {
			j++;
			}
		}
		cout << cnt << endl;
	}
	return 0;
}
