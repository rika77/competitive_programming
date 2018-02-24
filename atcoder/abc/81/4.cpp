#include<cstdio>
#include<cstdlib>	//abs(int)はcmathでなくcstdlib

using namespace std;

int max,index = 0;	//これでinitializeできてる？

void find_max(int A[], int n) {
	for (int i=0;i<n;i++) {
	if (abs(A[i]) > max) {
		max = abs(A[i]);
		index = i;
		}
	}
}

int main () {

	int n;
	scanf("%d", &n);
	int A[51] = {};
	for (int i=0;i<n;i++) {
	scanf("%d", &A[i]);
	}
//	最初から条件を満たしていれば、0を出力して終わらそう
//	このコーナーケースに自分で気付けると良い。

	int tf = 1;
	for (int i=0;i<n;i++) {
	if (A[i] > A[i+1]) tf = 0;
	}
	if (tf == 1) {
	printf("0\n");
	 return 0;
	}

	find_max(A, n);
	max = A[index];	//負の場合は負になるように。



	//回数
	printf("%d\n", 2*n-2);	

	for (int i=0;i<n;i++) {
	if (i != index) {A[i] += max; printf("%d %d\n", index+1, i+1);} 
//	printf("%d %d\n", i , A[i]);
	}

//	答える時は、index 0;index 1; ... index (n-1); ただしindex=iは除く
//	規則性があるので、わざわざメモリに入れる必要がない。
//	けど回数はもうわかってるし、もう書いちゃうか！

//	累積和
	if (A[index] >= 0) {	
	for (int i=0;i<n-1;i++) {
	A[i+1] += A[i];
	printf("%d %d\n", i+1, i+2);
	}	
	}
	else
	{
        for (int i=n-2;i>=0;i--) {
        A[i] += A[i+1];
        printf("%d %d\n", i+2, i+1);
        }
        }

	return 0;
}
	
