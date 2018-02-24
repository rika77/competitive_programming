#include<iostream>
#include<cstdio>
using namespace std;

int main(){
	int n;
	cin >> n;
	int a;
/*	while(cin >>a) {
	bool flag = 0;
	for (int i=0;i<=n;i++){
	if (a == i*7 + (n-i)*3) {flag = 1; break;}
	}
	if (flag == 1) cout << "YES" << endl;
	else cout << "NO" << endl;	
}
*/
	while(cin>>a){
	if (a !=1&&a!=2&&a!=4&&a!=5&&a!=8&&a!=11) cout << "YES" <<endl;
	else cout<<"NO"<<endl;
	}
	return 0;
} 
