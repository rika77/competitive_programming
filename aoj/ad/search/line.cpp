#include <cstdio>
using namespace std;

bool search(int S[], int n, int key) {
	int i=0;
	S[n] = key;
	while (S[i] != key) i++;
	return i != n;	
}

int main(){
	int n, S[10001],q;
	int cnt = 0;
	int key;

	scanf("%d",&n);
	for (int i=0;i<n;i++)
	scanf("%d",&S[i]);
	
	scanf("%d",&q);
	for (int i=0;i<q;i++) {
	scanf("%d",&key);
	if (search(S,n,key)) cnt++;
	}

	printf("%d\n", cnt);
	return 0;
}

