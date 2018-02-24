#include<iostream>
using namespace std;

int main(){
	int n;
	cin >> n;
	int a[n-1],b[n];
	for (int i=0;i<n-1;i++) {
	cin >> a[i];
	}
	for (int i=0;i<n;i++) {
	cin >> b[i];
	}

	int cnt = n;
	//連結なのが同じ色なら手間が一個減る
	for (int i=1;i<n;i++) {
	if (b[i] == b[ a[i-1] - 1 ]) {
	cnt--;
	}
	}
	cout << cnt << endl;
	return 0;
}
