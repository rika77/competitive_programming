#include<iostream>
#include<cstdio>
#include<string>
#include<algorithm>
using namespace std;
int map[100001];
int is_prime(int x) {

	//mapが既に埋まっていたら、その値を返す
	if (map[x]!=-1) {
	return map[x];
	}
	//xがprimeなら1返す
	if (x<2) {
	map[x] = 0;
	return 0;
	}
	if (x==2||x==3||x==5||x==7||x==11||x==13) {
	map[x] = 1;
	return 1;
	}
	if (x%2==0) {
	map[x] = 0;
	return 0;
	}
	if (x%3==0) {
	map[x] = 0;
	return 0;
	}
	if (x%5==0) {
	map[x] = 0;
	return 0;
	}
	if (x%7==0) {
	map[x] = 0;
	return 0;
	}
	if (x%11==0) {
	map[x] = 0;
	return 0;
	}
	if (x%13==0) {
	map[x] = 0;
	return 0;
	}

	for (int i=3;i*i <= x;i++) {
        if (x%i == 0) {
	map[x] = 0;
	return 0;
	}
        }
	map[x] = 1;
        return 1;
}


int main(){
	int q;
	int l,r;
	cin >> q;
	//map作った方が良さそう
	for (int i=0;i<100001;i++) {
	map[i] = -1;
	}
	
	for (int i=0;i<q;i++) {
	cin >> l >> r;
	int cnt = 0;
	for (int x=r;x>=l;x-=2) {
	int y = (x+1)/2;
	if (is_prime(y) == 1) {
	if (is_prime(x)==1) {
	cnt++;
	}
	}
	}
	cout << cnt << endl;
	}

	return 0;
}





