#include<iostream>
using namespace std;
#define FOR(i,a,b) for (int i=(a);i<(b);i++)
#define rep(i,n) FOR(i,0,n)
typedef long long ll;
int main(){
	int a,b,c;
	cin >> a>>b>>c;

	int d = b/a;
	cout << min(d,c) << endl;
}
