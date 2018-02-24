#include<iostream>
#include<cstdio>
#include<string>
#include<cstring>
#include<algorithm>
#include<vector>
#include<cmath>
#include<map>
#include<bitset>
#include<queue>
using namespace std;
#define FOR(i,a,b) for (int i=(a);i<(b);i++)
#define rep(i,n) FOR(i,0,n)
typedef long long ll;

// cout << "Case #" << i+1 << ": " << ans << endl;
int main(){
	int t;
	cin >> t;
	rep(i,t){
/*
	char sub[50];
	scanf("%s", sub);
	int len = strlen(sub);
	string be(sub);
*/

	string be;
	cin >> be;
	int len = be.size();
	string af(len,'0');
//	char af[len] = {};
	if (len%2) {
	cout << "Case #" << i+1 << ": " << "AMBIGUOUS" << endl;
	continue;
	}
	//initial
	af[1]=be[0];
	af[len-2]=be[len-1];

	FOR(j,1,len/2){
	int k = 1 + j*2;
	int l = len - 2 - j*2;

	if(be[k-1] < af[k-2]){
		char c = be[k-1] + 26 - af[k-2] + 'A';
		af[k] = c;
		}
	else{
		af[k] = be[k-1] - af[k-2] + 'A';
		}
	if(be[l+1] < af[l+2]){
                af[l] = be[l+1] + 26 - af[l+2] + 'A';
                }
        else{
                af[l] = be[l+1] - af[l+2] + 'A';
                }
/*
	if(be[k-1] < af[k-2]){
        	cout << be[k-1]<<endl;
                cout << af[k-2]<<endl;
	        cout << (int)be[k-1] << endl;
		cout << (int)af[k-2] << endl;
		af[k] = (char)((int)be[k-1] + 26 - (int)af[k-2]);
		}
        else{   
                af[k] = (char)((int)be[k-1] - (int)af[k-2]);
                }
        if(be[l+1] < af[l+2]){
                af[l] = (char)((int)be[l+1] + 26 - (int)af[l+2]);
                }
        else{   
                af[l] = (char)((int)be[l+1] - (int)af[l+2]);
                }
*/
	}

	cout << "Case #" << i+1 << ": " << af << endl;
/*	rep(j,len){
	cout << af[j];
	}
	cout << endl;
*/
	}

	return 0;
}
