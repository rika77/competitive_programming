#include <iostream>
using namespace std;

int main(){
	int n;
	cin >> n;
	int sum=0;
	for (int i=1;i<=n;i++) {
	sum += 10000 * i;
	}
	cout << sum/n << endl;
	return 0;
}
