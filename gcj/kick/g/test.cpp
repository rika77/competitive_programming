#include<cstdio>
using namespace std;
typedef unsigned long long ullong;

//指数を計算し終わる前に割るシステム
ullong pow(ullong x,ullong n, ullong M){
	ullong tmp=1;	//n=0でtmp=1
	if (n>0) {
	tmp = pow((x*x)%M, n/2, M);
	if (n%2!=0) tmp = (tmp*x)%M;
	}
	
	return tmp;
}

int main(){
	ullong m,n;
	scanf("%lld %lld", &m,&n);

	printf("%lld\n", pow(m,n, 1000000007));
	return 0;
}
