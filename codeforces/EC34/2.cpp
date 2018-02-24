#include<iostream>
#include<cmath>
using namespace std;

int main(){
	double h1,a1,c1,h2,a2;
	cin >> h1>>a1>>c1>>h2>>a2;

	if (h2/a1 < 1) {cout<<1<<endl; cout<<"STRIKE"<<endl; return 0;}

	double cnt = ceil(h2/a1);

	bool flag = 1;
	while (flag) {
	if (h1/a2 <= cnt-1) {h1 += c1; cnt++;}
	else flag = 0;
	}
	cout << (int)cnt << endl;
	
	for (int i=0;i<(cnt-ceil(h2/a1));i++) {
	cout << "HEAL" << endl;
	}

	for (int i=0;i<ceil(h2/a1);i++){
	cout << "STRIKE" << endl;
	}
	return 0;
}
