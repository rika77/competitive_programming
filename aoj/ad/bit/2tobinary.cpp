#include<iostream>
#include<bitset>
#include<string>
using namespace std;

int main(){
	int value = 5;
	string s = bitset<4>(value).to_string();
	cout << s << endl;
	return 0;
}
