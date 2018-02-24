#include<iostream>
#include<cstdio>
#include<string>
#include<cmath>
using namespace std;

int main() {
	double n,m;
	cin >> n>>m;
	int x;
	x = 1900*m + 100*(n-m);
	cout << x*pow(2.0,m)<<endl;
	return 0;
}

