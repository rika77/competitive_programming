#include <cstdio>
#include <algorithm>
using namespace std;

void bubblesort(int A[], int N) {
	int flag = 1;
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
	int notzero=0;
	for (int i=0;i<n;i++) {
	if (count[i]!=0) notzero++;
	}

	//minからsortする。
	bubblesort(count[200001],n);
	for (int i=0;i<n;i++) {
        printf("%d\n",count[i]);
        }		
	

	
	return 0;
}
	
	
	
