#include<bits/stdc++.h>
using namespace std;
#define FOR(i,a,b) for (int i=(a);i<(b);i++)
#define rep(i,n) FOR(i,0,n)
typedef long long ll;

// cout << "Case #" << z+1 << ": " << ans << endl;

int main(){

	int t;
	cin >> t;
	rep(z,t){
		string s;
		cin >> s;

		string t;

		// stringのaddは+で出来るんやったわ...

		rep(i,(int)s.size()) {
			if (s[i]=='4') {
				s[i] ='3';
				t +='1';
			} else if (!t.empty()) {
				t+='0';
			} 
		}	

		cout << "Case #" << z+1 << ": " << s << " "<<t<<endl;

	}
}


