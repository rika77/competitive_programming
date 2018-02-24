#include<iostream>
#include<cstdio>
#include<string>
#include<algorithm>
#define MAX 100001
using namespace std;

int map[MAX];
int c[MAX] = {};

void eratos() {
	for (int i=0;i<MAX;i++) {
	map[i] = 1;
	}
	int j;
	map[0]=map[1]=0;
	for (int i=2;i<MAX;i++) {
	if (map[i]) {
	j = i+i;
	while (j<=MAX) {
	map[j]=0;
	j = j+i;
	}
	}
	}
}
void like() {
	//2017に似た数が何個あるか
	for (int i=3;i<MAX;i+=2) {
	if (map[i]&&map[(i+1)/2]) c[i]++;
	}
	for (int i=3;i<MAX;i++) {
	c[i]+=c[i-1];
	}
}

int main(){
        int q;
        int l,r;
        cin >> q;
	eratos();
	like();
        for (int i=0;i<q;i++) {
        scanf("%d %d",&l,&r);
        printf("%d\n",c[r] - c[l-1]);
	}
        return 0;
}



