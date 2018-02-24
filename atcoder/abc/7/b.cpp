#include<iostream>
using namespace std;
 
int main(){
char a[2]={};
cin >> a;
if (a[0]!='a') cout << 'a' << endl;
else if (a[1]!='\0') cout << 'a' << endl;
else cout << -1 << endl;
 
return 0;
}
