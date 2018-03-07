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
	int n;
	int a,b;
	cin >> n;
	cin >> a;
	int flag = 2;
	int cnt = 1;
	rep(i,n-1){
		cin >> b;
		if ((flag==1&&a>b) || (flag==0&&a<b)){
			flag = 2;
			cnt++;
		}
		else if (a>b){
			flag = 0;
		}
		else if (a<b){
			flag = 1;
		}
		a = b;
	}

	cout << cnt << endl;
	return 0;
}
