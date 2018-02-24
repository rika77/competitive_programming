//桁があまりにも大きいので桁dpが必要!
#include<iostream>
#include<cstdio>
using namespace std;
#define MAX 10001
#define ll long long
int f[MAX] = {};

void make() {
	f[4] = f[9] = 1;
	for (ll i=14;i<=MAX;i++) {
	if (i%10 == 4 || i%10 == 9 || f[i/10]==1) {
	f[i] = 1;
	}
	}
	for (ll int i=5;i<MAX;i++) {
	f[i] += f[i-1];
	}
}

int main() {
	ll a,b;
	scanf("%lld %lld", &a, &b);
	make();	
	cout << f[b] - f[a-1] << endl;
	return 0;
}

