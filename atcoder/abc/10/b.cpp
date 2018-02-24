#include<iostream>
#include<cstdio>
using namespace std;

int main() {
	int n;
	int cnt=0;
	cin >> n;
	int a;
	int q;
	for (int i=0;i<n;i++) {
	cin >> a;
	q = a%6;
	if (q == 2) {
	cnt += 1;
	}
	else if (q == 0) {
	cnt += 3;
	}
	else if (q >= 4) {
	cnt += q - 3;
	
	}
	}

	cout << cnt << endl;
	return 0;
}
