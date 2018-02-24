//これは部分列が連続であるという制約つき。
//非連続でいいらしいので、、、、hogeすぎる。。

#include<iostream>
#include<cstdio>
#include<string>
#include<algorithm>
#include<vector>
#include<cmath>
#include<map>
#include<bitset>
#include<queue>
#include<set>
using namespace std;
#define FOR(i,a,b) for (int i=(a);i<(b);i++)
#define rep(i,n) FOR(i,0,n)
#define MAX 2000
typedef long long ll;

int main(){
	int n,flag,start;
	cin >> n;
	int a;
	int box[MAX] = {};
	//initial
	cin >> a;
	if(a==2){flag=start=2;}
	else{flag=start=1;}

	int cnt =1;
	int j = 0;

	FOR(i,1,n){
	cin >> a;
	if (flag==a){
		cnt++;
	}
	else if (flag==1 &&a==2){
	box[j] = cnt;
	cnt = 1;
	flag = 2;
	j++;
	}
	else {
	box[j] = cnt;
	cnt = 1;
	flag = 1;
	j++;
	}
	}
	box[j] = cnt;
	
	int i=0;
	while(box[i]!=0){
	cout << box[i++] << " ";
	}

	i=0;
	int maxi = 0;
	
	if(j<=2){
	cout << n << endl;
	return 0;
	} 
	
	if(start==1){
	while(box[i+3]!=0){
	int sum = box[i] + box[i+1] + box[i+2] + box[i+3];
	maxi= max(maxi,sum);
	i+=2;
	}
	}
	else{
	i = 1;
	while(box[i+3]!=0){
	int sum = box[i] + box[i+1] + box[i+2] + box[i+3];
        maxi= max(maxi,sum);
	i+=2;
	}
	}

	cout << maxi << endl;
	return 0;
}
