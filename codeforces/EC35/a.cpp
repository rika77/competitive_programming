#include<cstdio>
#include<algorithm>
#include<iostream>
using namespace std;

int main(){
	int n;
	int a[n];
	int mini = 2e9;
	cin >> n ;
	for (int i=0;i<n;i++) {
	cin >> a[i];
	mini = min(mini, a[i]);
	}
	int n_first = -1;
	int n_second = -1;
	int min_dis = 100000;
	cout << "min " << mini << endl;
	cout << "n " << n << endl;	
	for (int i=0;i<n;i++) {
	cout << "0" << endl;
	if (a[i] == mini && n_first == -1) {
	n_first = i;
	cout << "1 " << endl;
	}
	else if (a[i] == mini && n_second == -1) {
	n_second = i;
	//共に出揃った
	min_dis = n_second - n_first;
	cout << "2" << endl;
	}
	else if (a[i] == mini) {
	cout << "3" << endl;
	n_first = n_second;
	n_second = i;
	min_dis = min(min_dis, n_second - n_first);
	if (min_dis == 1) {
	printf("%d\n", min_dis);
	return 0;
	}
	}
	printf("1. %d 2. %d \n", n_first, n_second);
	}
		
	printf("%d\n", min_dis);
	return 0;
}
	
