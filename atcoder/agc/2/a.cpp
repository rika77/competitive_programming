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
	ll a,b;
	cin >> a>>b;

	if ((a<=0 && b>=0)||(a>=0 && b<=0)) {
		cout << "Zero" << endl;
	}
	else if (a>0 && b>0){
		cout << "Positive" << endl;
	}
	else {
		if ((a-b)%2==0) {
			cout << "Negative"<< endl;
		}
		else {
			cout << "Positive"<< endl;
		}
	}
	return 0;
}
