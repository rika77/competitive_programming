#include<iostream>
#include<cstdio>
#include<string>
#include<cmath>
#include<algorithm>
using namespace std;

int main() {
	int n;
	int a;
	cin >> n;
        int flag[101] = {};
	for (int i=0;i<n;i++) {
	cin >> a;
	flag[a] = 1;
	}

	int cnt = 0;
	for (int i=0;i<101;i++) {
	if (flag[i]) {
	cnt++;
	}
	}
	cout << cnt << endl;
	return 0;
}
