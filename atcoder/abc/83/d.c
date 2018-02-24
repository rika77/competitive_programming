#include<stdio.h>
#include<string.h>

int main(){
	char str[100000] = {};
	scanf("%s\n", str);

	//int l = 0;
	//l = strlen(str);
	//printf("%d\n", l);
	int num0=0;
	int num1=0;
	int i=0;
	while (str[i]!= '\0') {
	if (str[i]=='0') num0++;
	else if (str[i]=='1') num1++;
	
	i++;
	}
	int ans=0;
	if (num0>=num1) ans = num0;
	else ans = num1;
	printf("%d\n", ans);

	return 0;
}
