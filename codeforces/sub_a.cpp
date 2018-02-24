#include<iostream>
#include<algorithm>
using namespace std;

int main(){
	int n;	
	long int a[n];
	long int mini = 1000000000;
	cin >> n;
	for (int i=0;i<n;i++) {
	cin >> a[i];
	if (mini > a[i]) {
	mini = a[i];
	}
	cout << a[i] << endl;
	}

	cout << mini << " " << n << endl;
	return 0;
}
