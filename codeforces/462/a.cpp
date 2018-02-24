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
#define MAX 1000000001
typedef long long ll;
int main(){
	int n,m;
	cin >> n>>m;
	vector<ll> a,b;
	ll min1,min2, mini;
	ll max1,max2, maxi;
	ll suba,subb;
	rep(i,n){
	cin >> suba;
	a.push_back(suba);
	}
	sort(a.begin(),a.end());
	min1 = a[0];min2=a[1];max1=a[a.size()-1];max2=a[a.size()-2];
	
	rep(i,m){
        cin >> subb;
	b.push_back(subb);
        }
	sort(b.begin(),b.end());
	mini = b[0];maxi=b[b.size()-1];

      
//	cout << min1 <<min2<<max1<<max2<<endl;
	ll c = min2*mini,d = min2*maxi,e = max2*mini, f = max2*maxi;
	vector<ll> final = {c,d,e,f};
	sort(final.begin(),final.end());
	if (n==2){
	cout << final[final.size()-2] << endl;
	}
	else {
	cout << final[final.size()-1] << endl;
	}
	return 0;
}

