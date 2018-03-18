#include<bits/stdc++.h>
using namespace std;
#define FOR(i,a,b) for (int i=(a);i<(b);i++)
#define rep(i,n) FOR(i,0,n)
typedef long long ll;
int main(){
	int n;
	double x[100]={},y[100]={};
	cin >> n;
	double ma = 0.0;
	double a,b;
	rep(i,n){
		cin >> a>>b;
		x[i] = a;
		y[i] = b;
	}
	
	rep(i,n){
		FOR(j,i,n){
			double l = pow(x[i] - x[j], 2) + pow(y[i] - y[j], 2);
			ma = max(l,ma);
		}
	}

	cout << sqrt(ma) << endl;
}
