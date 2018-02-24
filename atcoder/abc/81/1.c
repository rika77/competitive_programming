#include <stdio.h>

int main(){
	char a;
	int cnt=0;
	for (int i=0;i<3;i++) {
	scanf("%c", &a);
	if (a == '1') cnt++;
	}
	printf("%d\n", cnt);
} 
