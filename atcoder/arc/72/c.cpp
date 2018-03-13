#include<bits/stdc++.h>
using namespace std;
#define FOR(i,a,b) for (int i=(a);i<(b);i++)
#define rep(i,n) FOR(i,0,n)
#define MAX 100000
typedef long long ll;


int main(){
	int n;
	cin >> n;
	ll a[MAX];
	rep(i,n){
		cin >> a[i];
	}

	bool flag = 1;	//負始まり
	ll tem = 0;
	ll ans1 = 0;
	rep(i,n){
		tem = a[i] + tem;
	//	cout << tem << " " << flag << " " << ans1 <<  endl;
		if (tem>0 && flag){	//||(tem==0&&!flag)){
			ans1 += tem + 1;
			tem = -1;
		}
		else if (tem==0&&!flag) {
			ans1 += tem + 1;
			tem = 1;
		}
		else if (tem<0 && !flag) {//||(tem==0 && flag)){
			ans1 += 1 - tem;
			tem = 1;
		}
		else if (tem==0 && flag) {
			ans1 += 1 - tem;
			tem = -1;
		}
		if (flag) flag = 0;
		else flag = 1;

	}

	flag = 0;
	tem = 0;
	ll ans2 = 0;
	rep(i,n){
		tem = a[i] + tem;
		if (tem>0 && flag){	//||(tem==0&&!flag)){
			ans2 += tem + 1;
			tem = -1;
		}
		else if (tem==0&&!flag) {
			ans2 += tem + 1;
			tem = 1;
		}
		else if (tem<0 && !flag) {//||(tem==0 && flag)){
			ans2 += 1 - tem;
			tem = 1;
		}
		else if (tem==0 && flag) {
			ans2 += 1 - tem;
			tem = -1;
		}

		
		if (flag) flag = 0;
		else flag = 1;
	}
//	cout << ans1 << " " << ans2 << endl;
	cout << min(ans1,ans2) << endl;
}
