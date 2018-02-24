#include<iostream>
#include<algorithm>
using namespace std;

int main() {
	int n;
	cin >> n;
	
	int k = n%30;
	int card[6] = {1,2,3,4,5,6};

	for (int i=0;i<k;i++) {
		swap(card[i%5],card[i%5+1]);
	}
	for (int i=0;i<6;i++) {
 	cout << card[i] ;
	}
	cout << endl;
 	return 0;
}	
	
