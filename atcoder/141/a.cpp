#include<bits/stdc++.h>
using namespace std;
#define FOR(i,a,b) for (int i=(a);i<(b);i++)
#define rep(i,n) FOR(i,0,n)
typedef long long ll;
int main(){

	string s;
	cin >> s;

	if (s=="Sunny") {
		cout << "Cloudy" <<endl;
		return 0;
	} 

	if (s=="Cloudy") {
		cout << "Rainy" <<endl;
		return 0;
	} 
	if (s=="Rainy") {
		cout << "Sunny" <<endl;
		return 0;
	} 

}