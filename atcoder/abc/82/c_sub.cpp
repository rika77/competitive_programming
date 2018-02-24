#include<iostream>
#include<cstdio>
#include<algorithm>
#include<string>
using namespace std;

int main(){
	int n;
	int a;
	cin>>n;
	int flag[1000000001] = {};
	for (int i=0;i<n;i++) {
	cin >> a;
	flag[a] += 1;
	}
	int cnt = 0;
	for (int i=1;i<=1000000000;i++) {
	if (flag[i]) {
	if (flag[i]>i) {
	cnt += flag[i] - i;
	}
	else if (flag[i]<i) {
	cnt += flag[i];
	}
	}
	}
	cout << cnt << endl;
	return 0;
}

