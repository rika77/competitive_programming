#include <cstdio>
using namespace std;

int A[100000];

int search(int key, int n) {
	int left = 0;
	int right = n;
	int mid;	
	while(left < right) {	//一緒になっても、notfound
	mid = (left+right)/2;
	if (A[mid] == key) return 1;
	else if (key < A[mid]){	//motto left
	right = mid;
	}
	else {
	left = mid + 1;	//かぶらないよーに?
	}
	}
	return 0;
}

int main(){
	int n, q,key;
	int cnt = 0;
	scanf("%d", &n);
	for (int i=0; i<n;i++) {
	scanf("%d", &A[i]);
	}
	
	scanf("%d", &q);
	for (int i=0;i<q;i++) {
	scanf("%d", &key);
	if (search(key,n)) cnt++;
	}
	printf("%d\n", cnt);
	return 0;
}
