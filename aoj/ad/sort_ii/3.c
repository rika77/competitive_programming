#include <stdio.h>
#include <math.h>

int main(){
	int a,b;
	scanf("%d %d",&a,&b);

	int n = b - a + 1;
	int map[36][11] = {};	//primes

	//int obj = a;
	int sum[11] = {};
	int out = 0;
	
	for (int obj = a; obj <= b;obj++) {
	printf("%d %d\n", obj, obj-a);
	if (obj%2==0) map[obj-a][0] = 1;
	if (obj%3==0) map[obj-a][1] = 1;
	if (obj%5==0) map[obj-a][2] = 1;
	if (obj%7==0) map[obj-a][3] = 1;
	if (obj%11==0) map[obj-a][4] = 1;
	if (obj%13==0) map[obj-a][5] = 1;
	if (obj%17==0) map[obj-a][6] = 1;
	if (obj%19==0) map[obj-a][7] = 1;
	if (obj%23==0) map[obj-a][8] = 1;
	if (obj%29==0) map[obj-a][9] = 1;
	if (obj%31==0) map[obj-a][10] = 1;
	}
	printf ("map[0][0] = %d\n", map[0][0]);
	for (int i=0;i<n;i++) {
	if (map[i][0]) sum[0] = sum[0] + 1;;
	if (map[i][1]) sum[1]++;
	if (map[i][2]) sum[2]++;
	if (map[i][3]) sum[3]++;
	if (map[i][4]) sum[4]++;
	if (map[i][5]) sum[5]++;
	if (map[i][6]) sum[6]++;
	if (map[i][7]) sum[7]++;
	if (map[i][8]) sum[8]++;
	if (map[i][9]) sum[9]++;
	if (map[i][10]) sum[10]++;
	}

	for (int i=0;i<n;i++) {
	if (sum[i]>=2)
	out += ((int)pow(2,sum[i]) - 1 - sum[i]) * (int)pow(2, n - sum[i]);
	}
	int res = (int)pow(2,n) - out;
	printf("result=%d out =%d sum[0]=%d\n",res,out,sum[0]);
	return 0;
}
