#include<bits/stdc++.h>
using namespace std;
#define FOR(i,a,b) for (int i=(a);i<(b);i++)
#define rep(i,n) FOR(i,0,n)
typedef long long ll;
int main(){
	int n;
	cin >> n;
	int num = pow(2.0,n);	//bit全探索
	vector<int> v;
	int a;
	rep(i,n){
		cin >> a;
		v.push_back(a);
	}
	int ma=0;
	int mi=200;

	rep(i,num){
		bitset<4> sub(i);
		string bi_sub = sub.to_string();
		string bi = bi_sub.substr(4-n,n);
		int a=0,b=0;
		//数字をbiの先頭から見ていく
		rep(j,n){
			if (bi[j]=='0') a+=v[j];
			else b+=v[j];
		}
		ma = max(a,b);
		mi = min(mi,ma);
	}

	cout << mi << endl;
}
