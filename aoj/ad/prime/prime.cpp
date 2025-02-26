#include <cstdio>
#include <cmath>
//factorize
using namespace std;
int k = 0;
int A[100000]={};
//まず、2からroot x までの素数を調べて箱に入れる。
int is_prime(int x) {
	//xが素数かどうかの判定をする
	if (x<2) return 0;
	if (x==2) return 1;
	if (x%2==0) return 0;
	for (int i=3;i*i <= x;i++) {
	if (x%i == 0) return 0;
	}
	return 1;
}

void prime_in(int x) {
	for (int i=2;i*i<=x;i++) {
	if (is_prime(i)) {
	A[k]=i;
	 k++;
	}
	}	
}

int main(){
	int n;
	scanf("%d",&n);
	prime_in(n);	//root 12までの箱に素数はいりました。
	printf("%d:",n);
	int i = 0;
	
	//具体的に操作してみて初めて気づく、最後は素数という、再帰..
	while (n != 1)  {
	if (is_prime(n)) {
	printf(" %d",n);
	break;
	}
	if (n % A[i] == 0) {
	printf(" %d",A[i]);
	n /= A[i];
	}
	else i++;
	}
	printf("\n");
	

	return 0;
}
