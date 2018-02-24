#include<cstdio>
#include<iostream>
#include<algorithm>
using namespace std;

int main(){
	int n,price;
	int maxi=0,sub_maxi=0;
	cin >> n;

	for (int i=0;i<n;i++) {
	cin >> price;
	if (price > maxi) {
	sub_maxi = maxi;
	maxi = price;
	}
	else if (price == maxi) {
	continue;	//maxと同じ値段のやつをsub_maxに入れずskipするcornercase
	}
	else if (price > sub_maxi) {
	sub_maxi = price;
	}
	}

	cout << sub_maxi << endl;
	return 0;
}
