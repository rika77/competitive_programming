#include<iostream>
#include<cstdio>
#include<string>
#include<algorithm>
using namespace std;

int main(){
	string a;
	cin >> a;
	int cnt2=0;
	int cnt5=0;

	for (int i=0;i<a.length();i++) {
	if (a[i]=='2') cnt2++;
	else cnt5++;
	}
	if (cnt2 != cnt5) {
	cout << "-1" <<endl;
	return 0;
	}

	
	

	return 0;
}
