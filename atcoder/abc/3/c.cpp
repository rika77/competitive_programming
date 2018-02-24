//高いのn個選んで、低い順に見る。
#include<cstdio>
#include<algorithm>
#include<functional>
using namespace std;

int main(){
	int n,k;

	scanf("%d %d", &n, &k);
	double a[100]={};
	for (int i=0;i<n;i++)
	scanf("%lf", &a[i]);

	sort(a,a+n,greater<float>());	//配列のsort 降順
	
	double sum=0.0;
	for (int i=k-1;i>=0;i--) {
	sum = (sum + a[i])/2.0;
	}
	printf("%lf\n", sum);

	return 0;
} 
