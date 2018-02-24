#include<iostream>
#include<cstdio>
#include<string>
#include<algorithm>
using namespace std;

int main(){
	int n;
	cin >> n;
	
	int c[500],s[500],f[500];
	for (int i=0;i<n-1;i++) {
	cin >> c[i] >> s[i] >> f[i];
	}

	for (int i=0;i<n;i++) {
	int sum =0;
	if (i == n-1) cout << sum << endl;
	else {
	sum = c[i] + s[i];
	for (int j=i;j<n-2;j++) {
	if (sum <= s[j+1]) {sum = s[j+1];}
	else if ((sum - s[j+1])%f[j+1] != 0) {
	sum+=f[j+1] - (sum - s[j+1])%f[j+1];
	}
	sum += c[j+1];
	}
	cout << sum << endl;
	}
	}
	return 0;
}
