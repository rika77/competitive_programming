#include<bits/stdc++.h>
using namespace std;
#define FOR(i,a,b) for (int i=(a);i<(b);i++)
#define rep(i,n) FOR(i,0,n)
typedef long long ll;

queue<string> Q;
int n;

	int a,b,c;
	int l[8];

void make() {
	Q.push("0");
	Q.push("1");
	Q.push("2");
	Q.push("3");

	while((int)Q.size() < (int)pow(4.0, n)) {
		string q = Q.front(); Q.pop();
		string q0 = q+"0";
		string q1 = q+"1";
		string q2 = q+"2";
		string q3 = q+"3";
		Q.push(q0);
		Q.push(q1);
		Q.push(q2);
		Q.push(q3);
	}
}

int cnt(string q){

	int fora = 0, forb=0, forc=0;
	int mp = 0;
	bool flag1 = true, flag2 = true, flag3 = true;
	rep(i,(int)q.size()) {
		if (q[i] == '1') {
			fora += l[i];
			if (flag1) {
				flag1 = false;
			} else {
				mp += 10;
			}
		} else if (q[i] == '2') {
			forb += l[i];
			if (flag2) {
				flag2 = false;
			} else {
				mp += 10;
			}
		} else if (q[i] == '3') {
			forc += l[i];
			if (flag3) {
				flag3 = false;
			} else {
				mp += 10;
			}
		}
	}
	mp += abs(fora - a) + abs(forb - b) + abs(forc - c);

	return mp;

}
bool valid(string q) {
	bool f1=false,f2=false,f3=false;
	rep(i, (int)q.size()) {
		if (q[i] == '1') {
			f1 = true;
		} else if (q[i] == '2') {
			f2 = true;
		} else if (q[i] == '3') {
			f3 = true;
		}
	}
	if (f1 && f2 && f3) {
		return true;
	} else {
		return false;
	}
}

int main(){

	cin >> n >> a >> b >> c;
	rep(i,n) {
		cin >> l[i];
	}
	make();

	int mi = 4000;
	while(!Q.empty()) {
		string q = Q.front(); Q.pop();

		// 1,2,3全部含んでないとだめ
		if (valid(q)) {
		mi = min(mi, cnt(q));
		}
	}
	cout << mi << endl;
}
