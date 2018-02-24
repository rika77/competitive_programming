#include<iostream>
#include<cstdio>
#include<string>
using namespace std;

int main(){
	string s,t;	//length()を使うのにはstring型でなければならない。
	cin >> s >> t;

	int len = s.length();

	for (int i=0;i<len;i++) {
	if (s[i] == '@') {
	if (t[i] != '@' &&t[i] != 'a' && t[i] != 't' && t[i] != 'c' && t[i] != 'o' && t[i] != 'd' && t[i] != 'e' && t[i] != 'r') {
	//cout << s[i] << t[i] << endl;
	cout << "You will lose" << endl; return 0;
	}
	}
	else if (t[i] == '@')  {
        if (s[i] != 'a' && s[i] != 't' && s[i] != 'c' && s[i] != 'o' && s[i] != 'd' && s[i] != 'e' && s[i] != 'r') {
	cout << "You will lose" << endl; return 0;}
        }
	else if (t[i] != s[i]) {
	cout << "You will lose" << endl; return 0;}
        }
	cout << "You can win" << endl;
	return 0;
} 
