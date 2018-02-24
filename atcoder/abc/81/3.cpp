#include <iostream>
#include <cstdio>
#include <algorithm>
using namespace std;

void bubblesort(int A[], int N) {
	bool flag = 1;
	for (int i=0; flag; i++) {
	flag = 0;
	 for (int j=N-1; j >i; j--) {
		if (A[j-1] > A[j]) {
		swap(A[j-1],A[j]);
		flag = 1;
		}
		}
	}
}



int main(){
	int n,k;
	int a[200001] = {};
	int count[200001] = {};
	scanf("%d %d", &n,&k);
	for (int i=0;i<n;i++)
	{scanf("%d",&a[i]);
	 count[a[i]-1]++;
	}
	int notzero=0;;
	for (int i=0;i<n;i++) {
	if (count[i]!=0) {notzero++;}
	}
	//0だったら配列に入れなくていいや。
	
/*	for (int i=0;i<n;i++) {
        printf("%d\n",count[i]);
        }
*/
	int j=0;
	int sub[notzero];
	for (int i=0; i<n;i++){
	if (count[i]!=0) {sub[j]=count[i];j++; if (j>=notzero) break;}
	}	
/*	for (int i=0;i<notzero;i++) {
        printf("before %d\n",sub[i]);
        }
*/
	//minからsortする。
	bubblesort(sub,notzero);
/*	for (int i=0;i<notzero;i++) {
        printf("%d\n",sub[i]);
        }		
	printf("notzero = %d\n", notzero);	
*/
	int cnt=0;
	int i = -1;

	if (notzero <= k) {printf("%d\n", cnt); return 0;};	
	while(notzero != k) {
	i++;
	if (sub[i]!=0){
	cnt += sub[i];
	notzero--;
	}
	}
		

	printf("%d\n", cnt);	
	return 0;
}
	
	
	
