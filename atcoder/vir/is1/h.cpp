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
	int n,c;
	cin >> n>> c;
	int a[100];
	rep(i,n){
		cin >> a[i];
	}
	int dif;
	int mi = 1000;
	FOR(i,1,11){
		FOR(j,1,11){
			dif = 0;
			if (i!=j) {
				rep(k,n){
					if (k%2 == 0) {
						if (a[k]!=i) dif++;
					}
					else {
						if (a[k]!=j) dif++;
					}
				}
			mi = min(mi,dif);
			}
		}
	}
	cout << mi * c << endl;
	return 0;
}
