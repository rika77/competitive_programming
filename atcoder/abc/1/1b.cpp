#include<iostream>
using namespace std;

int main(){
	int a;
	cin >> a;

	if (a < 100) 
	{cout << "00" << endl;
	return 0;}
	else if (a < 1000)
	{cout << 0 << a/100 << endl;
	return 0;}
	else if (a <= 5000)
	{cout << a/100 << endl;
	return 0;}
	else if (a <=30000)
	{cout << a/1000 + 50 << endl;
	return 0;}
	else if (a <= 70000)
	{cout << (a/1000 - 30)/5 + 80 << endl;
	return 0;}
	else
	{cout << 89 << endl;
	return 0;}
}
