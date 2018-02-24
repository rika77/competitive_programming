#include<iostream>
#include<cstdio>
#include<string>
#include<cmath>
#include<algorithm>
using namespace std;

int main() {
	int n;
	double h;
	double a[n],b[n];
	cin >>n>>h;

	double maxa = 0.0;
	for (int i=0;i<n;i++) {
	cin >> a[i] >> b[i];
	maxa = max(maxa, a[i]);
	}

	sort(b,b+n);
	reverse(b,b+n);
	int cnt = 0;

	for (int i=0;i<n;i++) {
	if (h<=0.0) {
	cout << cnt << endl;
	return 0;
	}
	if (b[i]>maxa) {
	h -= b[i];
	cnt++;
//	cout << cnt << endl;
	}
	} 	
//	cout << h << maxa << endl;
	cnt += ceil(h/maxa);
	cout << cnt << endl;

	return 0;
}

