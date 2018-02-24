#include<iostream>
#include<cstdio>
#include<string>
#include<cmath>
using namespace std;

int main() {
	int n,y;
	cin >> n>>y;
	y /= 1000;
	
	for (int i=0;i<=n;i++) {
	for (int j=0;j<=n-i;j++) {
	if (i*10+j*5+(n-i-j)*1==y) {
	printf("%d %d %d\n", i, j, n-i-j);
	return 0;
	}
	}
	}
	
	printf("-1 -1 -1\n");
	return 0;
}

