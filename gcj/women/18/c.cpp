#include<iostream>
#include<cstdio>
#include<string>
#include<algorithm>
#include<vector>
#include<cmath>
#include<map>
#include<bitset>
#include<queue>
#include<set>
#include<stack>
using namespace std;
#define FOR(i,a,b) for (int i=(a);i<(b);i++)
#define rep(i,n) FOR(i,0,n)
typedef long long ll;
bool a_flag=0,b_flag=0,c_flag=0;
// cout << "Case #" << i+1 << ": " << ans << endl;
string a,b,c;

void make(){
	if(a>b){
		if(b>c) b_flag=1;
		else if(a>c) c_flag=1;
		else a_flag=1;
	}
	else {
		if(a>c) a_flag=1;
		else if(b>c) c_flag=1;
		else b_flag=1;
	}
}
	
int main(){
	int t;
	cin >> t;
	rep(i,t){
	a_flag=0,b_flag=0,c_flag=0;
	int n;
	cin >> n;
	
	cin >> a >> b>>c;
	
	make();

	rep(j,n){
	if(a[j]=='A') a[j]='C';
	else if(a[j]=='C') a[j]='A';
	if(b[j]=='A') b[j]='C';
        else if(b[j]=='C') b[j]='A';
	if(c[j]=='A') c[j]='C';
        else if(c[j]=='C') c[j]='A';
	}
	make();

	rep(j,n){
        if(a[j]=='B') a[j]='C';
        else if(a[j]=='C') a[j]='B';
        if(b[j]=='B') b[j]='C';
        else if(b[j]=='C') b[j]='B';
        if(c[j]=='B') c[j]='C';
        else if(c[j]=='C') c[j]='B';
	}
        make();

	rep(j,n){
        if(a[j]=='A') a[j]='B';
        else if(a[j]=='B') a[j]='A';
        if(b[j]=='A') b[j]='B';
        else if(b[j]=='B') b[j]='A';
        if(c[j]=='A') c[j]='B';
        else if(c[j]=='B') c[j]='A';
	}
        make();

	rep(j,n){
        if(a[j]=='A') a[j]='C';
        else if(a[j]=='C') a[j]='A';
        if(b[j]=='A') b[j]='C';
        else if(b[j]=='C') b[j]='A';
        if(c[j]=='A') c[j]='C';
        else if(c[j]=='C') c[j]='A';
	}
        make();

	rep(j,n){
        if(a[j]=='B') a[j]='C';
        else if(a[j]=='C') a[j]='B';
        if(b[j]=='B') b[j]='C';
        else if(b[j]=='C') b[j]='B';
        if(c[j]=='B') c[j]='C';
        else if(c[j]=='C') c[j]='B';
	}
        make();

	cout << "Case #" << i+1 << ":";

	if(a_flag) cout << " YES";
	else cout << " NO";

	if(b_flag) cout << " YES";
        else cout << " NO";

	if(c_flag) cout << " YES"<<endl;
        else cout << " NO"<<endl;

	}
	return 0;
}
