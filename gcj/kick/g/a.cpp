#include<cstdio>
using namespace std;
typedef unsigned long long ullong;

//指数を計算し終わる前に割るシステム
//とりあえずわりと適当に割っていいっぽい
ullong pow(ullong x,ullong n, ullong M){
	ullong tmp=1;	//n=0でtmp=1
	if (n>0) {
	tmp = pow((x*x)%M, n/2, M);
	if (n%2!=0) tmp = (tmp*x)%M;
	}
	
	return tmp;
}

int main(){
	int k;
	scanf("%d",&k);
	ullong m,n,p;

	for (int i=1;i<=k;i++) {

	scanf("%lld %lld %lld", &m,&n,&p);
	ullong ans = pow(m,1,p);
	for (int j=2;j<=n;j++) {
	ans = pow(ans, j, p);
	}
	printf("Case #%d: %lld\n", i,ans);

	}
	return 0;
}
