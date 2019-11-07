#include<iostream>
#include<cstdio>
#include<string>
#include<cmath>
#include<algorithm>
#include<vector>
using namespace std;

int main() {
	int n;
	int h;
	int a;
	vector<int> b;
	cin >>n>>h;

	int ma = 0;
	for (int i=0;i<n;i++) {
	cin >> a;
	int sub;
	cin >> sub;
	b.push_back(sub);
	ma = max(ma, a);
	}

	sort(b.begin(),b.end());
	reverse(b.begin(), b.end());
	int cnt = 0;

	for (int i=0;i<n;i++) {
	
	if (b[i]>ma) {
	h -= b[i];
	cnt++;
//	cout << cnt << endl;
	} 
	if (h<=0) {
	cout << cnt << endl;
	return 0;
	}
	} 	
	cnt += h/ma;
	if (h%ma){
		cnt++;
	}
	cout << cnt << endl;

	return 0;
}

