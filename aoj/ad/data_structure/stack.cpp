#include <iostream>
#include <cstdlib> //for atoi function
using namespace std;

int top, S[1000];

void push(int x){ 	//pushするのは計算して数値を入れるときだけ
	top++;
	S[top] = x;
}

int pop(){
	top--;
	return S[top+1];
}		

int main() {
	top = 0; //initialize
	int cal,cal2;
	char str[1000];
	
	while (cin >> str) {

	if (str[0] == '+') {
	cal = pop();
	cal += pop();
	push(cal);
 	}
	else if (str[0] == '-') {
	cal = pop();
	cal2 = pop();
	push(cal2 - cal);
	}
	else if (str[0] == '*') {
	cal = pop();
	cal *= pop();
	push(cal);
	}
	else push(atoi(str));
	
	} //3桁になるとどうも怪しい。

	int ans = pop();				 
	cout << ans << endl;	//cout << pop()はだめらしい。
	return 0;
}


