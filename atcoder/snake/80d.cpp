#include<iostream>
using namespace std;

int main(){
	int h,w,n;
	cin >> h>>w>>n;
	int a;
	int c[100][100] = {};
	int x=0,y=0;	//initializeはこれしかないみたい
	for (int k=1;k<=n;k++) {
	cin >> a;
	for (int i=0;i<a;i++) {
	c[x][y] = k;
	if (x%2==0 && y!=(w-1)) {
	y++;
	}
	else if (x%2==0 && y==(w-1)) {
	x++;
	}
	else if (y==0) {
	x++;
	}
	else {
	y--;
	} 
	}
	}

	for (int i=0;i<h;i++) {
	for (int j=0;j<w;j++) {
	if (j) cout << " ";
	cout << c[i][j];
	}
	cout << endl;
	}

	return 0;
}
