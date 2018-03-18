#include<iostream>
#include<cstdio>
#include<string>
#include<algorithm>
#include<vector>
#include<cmath>
#include<map>
#include<bitset>
#include<queue>
using namespace std;
#define FOR(i,a,b) for (int i=(a);i<(b);i++)
#define rep(i,n) FOR(i,0,n)
typedef long long ll;
int main(){
	string s;
	cin >> s;
	int l = s.size();
	int ptr = l - 3;

	if (l<5) {
		cout << "NO" << endl;
		return 0;
	}
	else {
		while(ptr>=0) {
			if (s[ptr]=='e') {
				string str = s.substr(ptr-2,5);
				if (str == "dream") {
					ptr -= 5;
				}
				else {
					cout << "NO" << endl;
					return 0;
				}
			}
			else if (s[ptr]=='m') {
				string str = s.substr(ptr-4,7);
				if (str == "dreamer") {
						ptr -= 7;
				}
				else {
					cout << "NO" << endl;
					return 0;
				}
			}
			else if (s[ptr]=='a') {
				string str = s.substr(ptr-2,5);
				if (str == "erase") {
					ptr -= 5;
				}
				else {
					cout << "NO" << endl;
					return 0;
				}
			}
			else if (s[ptr]=='s') {
				string str = s.substr(ptr-3,6);
				if (str == "eraser") {
					ptr -= 6;
				}
				else {
					cout << "NO" << endl;
					return 0;
				}
			}
			else {
				cout << "NO" << endl;
				return 0;
			}
		}
	}

	if (ptr==-3) cout << "YES"<< endl;
	else cout << "NO" << endl;

	return 0;
}

			


			
