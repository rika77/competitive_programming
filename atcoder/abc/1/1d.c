#include <stdio.h>


int main(){
	int n;
	int ans[288] = {};
	scanf("%d", &n);
	int time1,time2;
	char a[30000][9];
	for (int i=0;i<n;i++)
	{
	scanf("%s",a[i]);
	time1 = ((a[i][0]-'0')*10+(a[i][1]-'0')) * 60 + ((a[i][2]-'0')*10+(a[i][3]-'0'));
	if (time1%5 != 0) time1 -= time1%5;
	
	time2 = ((a[i][5]-'0')*10+(a[i][6]-'0')) * 60 + ((a[i][7]-'0')*10+(a[i][8]-'0'));
	if (time2%5 != 0) time2 += (5 - time2%5);
	

	for (int j = (time1/5); j< (time2/5);j++) {
	ans[j] = 1;
	}
	}

	//for (int i=0;i<288;i++)
	//printf("%d %d\n",i,ans[i]);
	
	int k=0;
	int dur = 0;
	//まず最初に1を見つけたところで、出力
	while (k<288){
	if (dur == 0 && ans[k]==1)
	{
	 printf("%02d%02d-", (k*5)/60, (k*5)%60);
	 dur = 1;
	 k++;
	}
	//突然、0になってしまった
	else if (dur == 1)
	{
	if (ans[k]==0) 
	{
	 printf("%02d%02d\n", (k*5)/60, (k*5)%60);
	 dur = 0;
	 k++;
	}
	else if (k==287)
	{
         printf("2400\n");
         break;
        }
	else k++;
	 }
	else k++;
	}
	return 0;
}

