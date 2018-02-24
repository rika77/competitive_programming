//商は実はいらないのでした。

#include<iostream>
using namespace std;

//Euclid
int gcd(int x, int y){
	if (x < y) swap(x,y);
//	int q = x /y;
	int r = x%y;
	while (r!=0) {
	x = y;
	y = r;
//	q = x/y;
	r = x%y;
	}
	return y;
}

int main(){
	int x,y;
	cin >> x >> y;
	cout << gcd(x,y) << endl;
	return 0;
}
	
