#include <stdio.h>

int main(){
	int n;
	scanf("%d", &n);
	int a[201] = {};

	for (int i=0;i<n;i++) {
	scanf("%d", &a[i]);
	}

	int cnt=0;
	
	
	for (int i=0;i<n;i++) {
	if (a[i]%2!=0) break;
	else 
	{
	a[i] /= 2;
	if (i == (n-1)) {cnt++; i=0;}
	}
	}

	printf("%d\n", cnt);
 return 0;
} 
	
	
