#include<iostream>
using namespace std;

int main(){
	int n,m;
	cin >> n >> m;
	int a,b,c;
	if (m < n*2 || m > n*4) {
	cout << "-1 -1 -1" << endl;
	return 0;
	}
	if (m%2 != 0) {
	b = 1;	//奇数なので老人が一人
	a = (4*n - 1 - m) / 2;
	c = n - a - 1;
	}
	else {
	b = 0;
	a = 2*n - m/2;
	c = n - a;
	}
	if (a+b+c == n && a*2+b*3+c*4 == m) {
	cout << a << " " << b << " " << c << endl;
	}
	else
	cout << "-1 -1 -1" << endl;
	return 0;
}
	
