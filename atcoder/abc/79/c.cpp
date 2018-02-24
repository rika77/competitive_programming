#include<iostream>
#include<cstdio>
#include<string>
#include<cmath>
using namespace std;

int main() {
	string n;
	cin >> n;
	int a,b,c,d;
	a = n[0] - '0';
	b = n[1] - '0';
	c = n[2] - '0';
	d = n[3] - '0';
	
	if (a+b+c+d==7) {printf("%d+%d+%d+%d=7\n",a,b,c,d);}
	else if (a+b+c-d==7) {printf("%d+%d+%d-%d=7\n",a,b,c,d);}
	else if (a+b-c+d==7) {printf("%d+%d-%d+%d=7\n",a,b,c,d);}
	else if (a+b-c-d==7) {printf("%d+%d-%d-%d=7\n",a,b,c,d);}
	else if (a-b+c+d==7) {printf("%d-%d+%d+%d=7\n",a,b,c,d);}
	else if (a-b+c-d==7) {printf("%d-%d+%d-%d=7\n",a,b,c,d);}
	else if (a-b-c+d==7) {printf("%d-%d-%d+%d=7\n",a,b,c,d);}
	else if (a-b-c-d==7) {printf("%d-%d-%d-%d=7\n",a,b,c,d);}

	return 0;
}
