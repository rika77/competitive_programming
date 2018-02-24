#include<cstdio>
#include<iostream>
#include<string>
#include<algorithm>
#include<cmath>
#include<bitset>
using namespace std;


int main(){
	string str;
	cin >> str;

	int out = 0;
    for (int i = 0, size = str.size() ; i < size ; ++i ) {
        out *= 2;
        out += ((int)str[i] == 49) ? 1 : 0;
    	}
	cout << out << endl;	//10進数表記した入力?

	int num0=0;
	int num1=0;
	int i=0;
	while(str[i]!='\0'){
	if (str[i]=='0') num0++;
	else if (str[i]=='1') num1++;
	i++;
	}
	
	if (num0 > num1) out = ~out;
		
	cout << binary(out) << endl;	

	return 0;
}
