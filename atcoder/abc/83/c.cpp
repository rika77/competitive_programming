#include<iostream>
using namespace std;

int main(){
	long long int x,y;
	cin >> x >> y;

	long long int a = y/x;
	long long int i=1;
	while (a / 2 > 0) {
	 i++;
	 a /= 2;
	}

	cout << i << endl;
	return 0;
}
