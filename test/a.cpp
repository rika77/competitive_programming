#include<iostream>
#include<cstdio>
#include<string>
#include<algorithm>
#include<vector>
#include<cmath>
#include<map>
#include<bitset>
#include<queue>
#include<set>
using namespace std;
#define FOR(i,a,b) for (int i=(a);i<(b);i++)
#define rep(i,n) FOR(i,0,n)
typedef pair<double,double> P;
typedef long long ll;

// cout << "Case #" << i+1 << ": " << ans << endl;
int main(){
	int t;
	cin >> t;
	rep(i,t){
	int n;
	cin >> n;
	double a,b;
	vector<P> v;
	rep(j,n){
		cin >>a>>b;
		v.push_back(P(a,b));
	}
	double mi = 10000.0;
	rep(j,n-2){
		FOR(k,j+1,n-1){
			FOR(l,k+1,n){
				double sub1 = v[j].first - v[k].first;
				double sub2 = v[j].second - v[k].second;
				double sub3 = v[k].first - v[l].first;
				double sub4 = v[k].second - v[l].second;
				double sub5 = v[l].first - v[j].first;
				double sub6 = v[l].second - v[j].second;

				double sub = sqrt(sub1*sub1 + sub2*sub2) + sqrt(sub3*sub3 + sub4*sub4) + sqrt(sub5*sub5 + sub6*sub6);

				mi = min(mi,sub);
			}
		}
	}
	cout << "Case #" << i+1 << ": " << mi << endl;
	}
	return 0;
}

