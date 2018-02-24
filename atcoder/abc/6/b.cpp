#include<iostream>
using namespace std;

/*
int tri(int n){
	if (n==1||n==2) return 0;
	if (n==3||n==4) return 1;
	return tri(n-1) + tri(n-2) + tri(n-3);
}
*/

//再帰というよりは
//動的計画法を用いる。
int tri(int n) {
	int a=0,b=0,c=1;
	if (n==1||n==2) return 0;
        if (n==3||n==4) return 1;
	int sub_c;
	for (int i=0;i<n-3;i++) {
	sub_c = c%10007;
	c = (a + b + c)%10007;	
	a = b%10007;	
	b = sub_c%10007;
	}

	return c;
} 
int main(){
	int n;
	cin >> n;
	cout << tri(n) << endl;
	return 0;
}	
	
