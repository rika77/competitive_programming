#include<iostream>
#include<algorithm>
using namespace std;

int main(){
	int n;
	cin >> n;

	//minを返す
	int mini = 100;
	int a;

	for (int i=0;i<n;i++) {
	cin >> a;
	mini = min(mini, a);
	}

	cout << mini << endl;

	return 0;
}
