// 関数、機能の分割
// O(L^4)=O(n^8)なので多分AtCoderだときびい？
// アナグラム->mapで答え合わせ(定石) : O(n+m)
// ループの数を減らせないか？という視点

#include<bits/stdc++.h>
using namespace std;
#define FOR(i,a,b) for (int i=(a);i<(b);i++)
#define rep(i,n) FOR(i,0,n)
typedef long long ll;

// cout << "Case #" << z+1 << ": " << ans << endl;

string a, b;

bool is_anagram(string a, string b) {
	unordered_map<char, int> M;
	rep(i, (int)a.size()) {
		M[a[i]]++;
	}

	rep(i, (int)b.size()) {
		if (!M[b[i]]) {
			return false;
		}
		M[b[i]]--;	//これが大事
	}
	return true;
}

bool f(int i, int j, int k) {
	// Aのi-j, Bのk-lが互いにanagramならreturn true;
	string s = a.substr(i, j-i+1);
	string t = b.substr(k, j-i+1);

	return is_anagram(s,t);
}

int main(){

	int t;
	cin >> t;
	rep(z,t){
		int n;
		cin >> n;
		cin >> a >> b;
		ll cnt = 0;
		rep (i, n) {
			FOR (j, i, n) {
				rep (k, n+i-j) {
					if (f(i, j, k)) {
						cnt++;
						// cout << i << " " << j << " " << k << endl;
						break;
					}
				}
			}
		}

		cout << "Case #" << z+1 << ": " << cnt << endl;
	}
}


