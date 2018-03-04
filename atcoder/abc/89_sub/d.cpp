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
#define MAX 90001
typedef long long ll;
int main(){
	int h,w,d;
	cin >> h>>w>>d;
	//int s = h*w;
	int **a = new int*[MAX];
	rep(i,MAX){
		a[i] = new int[2];
	}
	a[0][0]=a[0][1]=0;
	int sub;
	rep(i,h){
		rep(j,w){
			cin >> sub;
			a[sub][0] = i;
			a[sub][1] = j;
		}
	}

	int q;
	cin >> q;
	int f[MAX] = {};
	rep(i,MAX){
		if (i<=d) f[i]=0;
		else {
			int k = i-d;
			f[i] = f[k] + abs(a[i][0]-a[k][0]) + abs(a[i][1]-a[k][1]);
		}
	}

	int l,r;
	rep(i,q){
		cin >> l>>r;
		cout << f[r] - f[l] <<endl;
	}
	return 0;
}

