#include<bits/stdc++.h>
using namespace std;
#define FOR(i,a,b) for (int i=(a);i<(b);i++)
#define rep(i,n) FOR(i,0,n)
#define MAX 100005
typedef long long ll;
int main(){
 int m, n;
 cin >> m >> n;
 int a[MAX][MAX] = {};
 int x[MAX] = {}, y[MAX] = {};
 for (int i = 0; i < m; i++) {
  for (int j = 0; j < n; j++) {
   cin >> a[i][j];
   if (a[i][j] == 1) {
    x[i]++;
    y[j]++;
   }
  }
 }
 int p = 0, q = 0;
 if (m == 2) p++;
 else {
  for (int i = 1; i < m; i++) {
   bool judge = true;
   if (i > 1) {
    for (int j = 0; j < i / 2; j++) {
     if (x[j] != x[i - 1 - j]) {
      judge = false;
      break;
     }
    }
    if (judge == false) {
     continue;
    }
   }
   if (i < m - 1) {
    for (int j = i; j < (m + i) / 2; j++) {
     if (x[j] != x[m - 1 - j]) {
      judge = false;
      break;
     }
    }
    if (judge == false) {
     continue;
    }
   }
   p++;
  }
 }
 if (n == 2) q++;
 else {
  for (int i = 1; i < n; i++) {
   bool judge = true;
   if (i > 1) {
    for (int j = 0; j < i / 2; j++) {
     if (y[j] != y[i - 1 - j]) {
      judge = false;
      break;
     }
    }
    if (judge == false) {
     continue;
    }
   }
   if (i < n - 1) {
    for (int j = i; j < (n + i) / 2; j++) {
     if (y[j] != y[n - 1 - j]) {
      judge = false;
      break;
     }
    }
    if (judge == false) {
     continue;
    }
   }
   q++;
  }
 }
 cout << p * q << endl;
}