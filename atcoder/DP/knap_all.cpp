//knapを深さ優先の全探索する
#include<cstdio>
#include<algorithm>
using namespace std;
int n, w_limit;
int w[100],v[100];

int rec(int k, int w_limit) {
	//品物k~(n-1)までを、容量限界がw_limitであるナップサックに入れる時の
	//価値の最大値を返す
	if (k>=n) return 0;
	if (w_limit < w[k]) {
	//品物kは重くて入らないのでいれない。品物k+1でtry
	return rec(k+1, w_limit);
	}
	//それ以外はkを入れるか入れないか選択できるので、valueが大きくなる方を
	return max(rec(k+1, w_limit), v[k] + rec(k+1, w_limit - w[k]));
}
		

	
int main(){
	scanf("%d %d", &n,&w_limit);

	for (int i=0;i<n;i++) {
	scanf("%d %d\n", &v[i], &w[i]);
	}

	printf("%d\n", rec(0,w_limit));	
	return 0;
}
