#include <iostream>
using namespace std;

//prime judge function
int is_prime(int x){
	if (x==2) return 1;
	if (x<2 || x%2==0) return 0;
	for (int i = 3; i*i <= x; i+=2){
	if (x%i==0) return 0;
	}
	return 1;
}

int main() {
	int A[10001], N;
	cin >> N;
	int cnt = 0;
	for (int i=0;i<N;i++) {
	cin >> A[i];
	cnt += is_prime(A[i]);
	}

	cout << cnt << endl;
	return 0;
}

			
	
