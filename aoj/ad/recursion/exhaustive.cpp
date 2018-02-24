#include <cstdio>
using namespace std;

int n,A[20];

int search(int i, int sum){
	if (sum==0) return 1;
	if (i>=n) return 0;
	int res=search(i+1,sum) || search(i+1,sum-A[i]);
	//どっちか成立すれば1;
	return res;
}

int main(){
	scanf("%d",&n);
	for (int i=0; i<n;i++) 
	scanf("%d", &A[i]);
	int q;
	scanf("%d",&q);
	int m;
	for (int i=0;i<q;i++){
	scanf("%d",&m);
	if (search(0,m)) printf("yes\n");
	else printf("no\n");
	}
}
