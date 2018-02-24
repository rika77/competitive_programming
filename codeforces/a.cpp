#include<iostream>
#include<cstdio>
#include<string>
using namespace std;
int main(){
	string a;
	cin >> a;
	int cnt = 0;

	for (int i=0;i<a.length();i++) {
	if (a[i] == '1' || a[i] == '3' || a[i] == '5' || a[i] == '7' || a[i] ==  '9'||a[i] == 'a'||a[i] == 'e'||a[i] == 'i'||a[i] == 'o'||a[i] == 'u') {
	cnt++;
	}
	}

	cout << cnt << endl;
	return 0;
}
