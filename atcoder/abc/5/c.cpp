#include<cstdio>
using namespace std;

int main(){
	int t,n,a[100]={},m;
	scanf("%d %d",&t,&n);
	for (int i=0;i<n;i++) scanf("%d",&a[i]);
	scanf("%d", &m);

	int k=0;
	int b;

	for (int i=0;i<m;i++) {
	scanf("%d", &b);
	
	bool flag = 0;
	for (int j=k;j<n;j++) {
	
	if (a[j]<=b && a[j]>=(b-t) ) {
//	printf("can buy k=%d,j=%d \n",k,j);
	k = j+1;
	flag = 1;
	break;
	}
	
	}
	if (flag == 0) {
	printf("no\n");
	return 0;
	}
	}
	
	printf("yes\n");
	return 0;
}
