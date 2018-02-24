#include<iostream>
#include<bitset>
#include<string>
using namespace std;

int main(){
	int n,x,a;
	int sum=0;
	cin >> n >> x;
	
	string str = bitset<20>(x).to_string();
	//strは2進数表記したx
	
	for (int i=19;i>19-n;i--){
	cin >> a;
	//cout << (str[i] == '0') << endl;
	if (str[i]=='1') sum += a;
	}
	cout << sum << endl;
	return 0;
}
