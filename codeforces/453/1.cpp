#include<iostream>
#include<cstdio>
#include<algorithm>
using namespace std;

int main(){
	int n,m;
	cin >> n>> m;
	int a[100]={};
	int b[100]={};

	for (int i=0;i<n;i++) {
	scanf("%d %d\n", &a[i], &b[i]);
	}
	if (b[n-1] != m || a[0] != 0) {
	printf("NO\n");
	return 0;
	}
	//n=1のとき
	if (n==1) {
	if (a[0]==0 && b[0]==m) {
	printf("YES\n");
	return 0;
	}
	else { 
	printf("NO\n");
	return 0;
	}
	}
	
	int maxi = b[0];	
	for (int i=0;i<n-1;i++) {
	maxi = max(maxi, b[i]);
	if (a[i+1]>maxi) {
	printf("NO\n");
	return 0;
	}
	}

	printf("YES\n");
	return 0;
}

	

