#include<bits/stdc++.h>
using namespace std;
#define FOR(i,a,b) for (int i=(a);i<(b);i++)
#define rep(i,n) FOR(i,0,n)
typedef long long ll;
#define MOD 1000000007

string s;
int l;

int is_valid(string s) {
	int value = stoi(s);
	if (value%13 == 5) {
		return 1;
	}
	return 0;
}

// int count_digit(int j) {
// 	// j-1から数字が何個続くかを数える
// 	if (j==0) {
// 		return 0;
// 	}
// 	int index = j - 1;
// 	int cnt = 0;

// 	while(index >= 0 && s[index]!='?') {
// 		index--;
// 		cnt++;
// 	}

// 	return cnt;
// }

queue<string> Q;

void make_data() {
	for (int i = l-1; i >= 0; i--) {
		ll len = Q.size();
		if (s[i]!='?') {
			rep(j,len) {
				string q = Q.front(); Q.pop();
				string in = s[i] + q;
				// cout << in << endl;
				Q.push(in);
			}
		} else {
			rep(k,len) {
				string q = Q.front(); Q.pop();
				rep(j,10) {
					string a = to_string(j);
					string in = a + q;
					// cout << in << endl;
					Q.push(in);
				}
			}
		}
	}
}

int main(){

	cin >> s;

	l = s.size();
	Q.push("");


	make_data();
	ll cnt = 0;
	while(!Q.empty()) {
		string q = Q.front(); Q.pop();
		cnt += is_valid(q);
		cnt %= MOD;
	}

	cout << cnt << endl;
}