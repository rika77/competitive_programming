#include<cstdio>
#include<iostream>
using namespace std;
#define MAX 100001
int n;
int prime[MAX];
int cnt[MAX]={};
void eratos() {
	for (int i=0;i<MAX;i++) {
	//����prime�����ꤹ��
	prime[i] = 1;
	}
	prime[0] = prime[1] = 0;
	//�ʤ�٤��ᤤ�ʳ��ǥ��åȤ��봶��
	for (int i=2;i<MAX;i++) {
	if (prime[i]) {
	for (int j=i+i;j<MAX;j+=i) {
	prime[j] = 0;
	}
	}	
	}
}

void like() {
	for (int i=3;i<MAX;i++) 
	{
	if (i%2==1) {	
	if (prime[i] && prime[(i+1)/2]) {
	++cnt[i];
	}
	}
	cnt[i]+=cnt[i-1];
	}
}



int main() {
	int q;
	int l,r;
	cin >> q;
	eratos();
	like();
	for (int i=0;i<q;i++) {
	scanf("%d %d", &l, &r);
	printf("%d\n", cnt[r]-cnt[l-1]);
	}

/*	for (int i=0;i<=11;i++) {
	cout << "p "<<prime[i] << endl;
	cout << "c "<<cnt[i] << endl;
	}
*/
	return 0;
}
