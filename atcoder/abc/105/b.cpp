#include<bits/stdc++.h>
using namespace std;
#define FOR(i,a,b) for (int i=(a);i<(b);i++)
#define rep(i,n) FOR(i,0,n)
typedef long long ll;
int main(){
	int n;
	cin >> n;
		
	if (n==1||n==2||n==3||n==5||n==6||n==9||n==10||n==13||n==17) {
		cout << "No" << endl;
	}
	else {
		cout << "Yes" << endl;
	}
	
	return 0;
}
