#include<iostream>
using namespace std;

int bubblesort(int A[], int N) {
	int sw = 0;
	bool flag = 1;
	for (int i=0; flag; i++) {
	flag = 0;
	 for (int j=N-1; j >i; j--) {
		if (A[j-1] > A[j]) {
		swap(A[j-1],A[j]);
		flag = 1;
		sw++;
		}
		}
	}
	return sw;
}

int main() {
 int A[100], N, sw;
 cin >> N;
	for (int i=0; i<N; i++) {
	cin >> A[i];
	}
 sw = bubblesort(A,N);

 for (int i=0;i<N;i++) 
	{
		if (i) cout << " ";
		cout << A[i];
	}
 cout << endl;
 cout << sw << endl;

 return 0;

}



