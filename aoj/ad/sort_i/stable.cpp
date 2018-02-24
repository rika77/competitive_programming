#include<iostream>
using namespace std;

struct Card {char suit, value; };

void bubble(struct Card A[], int N) {
	for (int i=0; i<N; i++){
	for (int j=N-1; j > i; j--){
	if (A[j-1].value > A[j].value){
	swap(A[j-1],A[j]);
	//構造体はまるごとswap できないぽいので
	}
	}}}

void select(struct Card A[], int N) {
	int minj = 0;
	for (int i=0;i<N;i++) {
	minj = i;
	for (int j=i+1; j<N; j++) {
	if (A[j].value < A[minj].value) minj = j;
	}
	swap(A[minj],A[i]);
	}
}

void print(struct Card A[], int N) {
	for (int i=0;i<N;i++) {
	if (i) cout << " ";
	cout << A[i].suit << A[i].value;
	}
	cout << endl;
}

bool isStable(struct Card in[], struct Card out[], int N) {
	for (int i=0;i<N;i++) {
	for (int j=i+1;j<N;j++) {
	for (int a=0;a<N;a++) {
	for (int b=a+1;b<N;b++) {
	if (in[i].value == in[j].value && in[i].value==out[b].value && in[i].suit == out[b].suit &&  in[j].suit==out[a].suit && in[j].value==out[a].value)
	return false;
	}}}}
	return true;
}

int main() {
	struct Card in[37],C1[37],C2[37];
	int N;
	cin >> N;

	for (int i=0;i<N;i++) {
	cin >> in[i].suit >> in[i].value;
	}

	for (int i=0;i<N;i++) {
	C1[i] = in[i];
	C2[i] = in[i];
	}	//copy

	bubble(C1,N);
	select(C2,N);

	print(C1,N);
	
	if (isStable(in,C1,N)) cout << "Stable" << endl;
	else cout << "Not stable" << endl;

	print(C2,N);

	
	if (isStable(in,C2,N)) cout << "Stable" << endl;
	else cout << "Not stable" << endl;
	
	return 0;}
	
