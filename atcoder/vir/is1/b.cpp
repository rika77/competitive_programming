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
	ll n;
	ll a[100001];
	ll sum=0;
	cin >> n;
	rep(i,n){
		cin >> a[i];
		sum += a[i];
	}
	ll ny = (n*(n+1))/2;
	ll k = sum / ny;
	if (sum%ny) {
		cout << "NO" << endl;
		return 0;
	}
	
	bool flag = 0;
	rep(i,n-1){
		ll dif = a[i+1] - a[i];
		if ((k-dif)%n != 0 || dif > k) {
			flag = 1;	//あかん
			break;
		}
	}
	ll dif = a[0] - a[n-1];
	if ((k-dif)%n != 0 || dif > k) {
			flag = 1;	//あかん
		}
	if (flag){
		cout << "NO" << endl;
	}
	else {
		cout << "YES" << endl;
	}

	return 0;
}
