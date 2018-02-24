#include<iostream>
#include<cstdio>
#include<string>
#include<algorithm>
using namespace std;

int main(){
	int a,b;
	cin >> a >> b;

	string s;
	cin >> s;

	bool flag = true;
	for (int i=0;i<a;i++) {
	if (!('0'<=s[i] && s[i]<='9')){
	flag = false;
	}
	}

	if (s[a]!='-') {
	flag = false;
	}
	int len = a+b+1;

	for (int i=a+1;i<len;i++) {
        if(!('0'<=s[i] && s[i]<='9')){
	flag = false;
        }
        }

	if (flag) {
	cout << "Yes" << endl;
	}
	else {
	cout << "No" << endl;
	}
	return 0;
}
