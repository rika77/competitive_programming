#include <iostream>
#include <cstdio>
#include <cstdlib>
using namespace std;

int main(){
	int n;
	cin >> n;
	int time1,time2;
	char a[30000][9];
	for (int i=0;i<n;i++)
	{
	cin >> a[i];
	time1 = (atoi(a[i][0])*10+atoi(a[i][1])) * 60 + (atoi(a[i][2])*10+atoi(a[i][3]));
	if (time1%5 != 0) time1 += (5 - time1%5);
	
	time2 = (atoi(a[i][5])*10+atoi(a[i][6])) * 60 + (atoi(a[i][7])*10+atoi(a[i][8]));
	if (time2%5 != 0) time2 += (5 - time2%5);
	
	int ans[288] = {};

	for (int j = (time1/5); j< (time2/5);j++) {
	ans[j] = 1;
	}
	}

	for (int i=0;i<288;i++)
	cout << ans[i];

	cout << endl;	
	return 0;
}
