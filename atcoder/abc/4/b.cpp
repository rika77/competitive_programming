#include<cstdio>
#include<algorithm>
using namespace std;

int main(){
	char c[4][4];
	for (int i=0;i<4;i++) {
	for (int j=0;j<4;j++) {
	if (j==3) scanf("%c\n",&c[i][j]);
	else scanf("%c ", &c[i][j]);
	}
	}
	
/*	for (int i=0;i<4;i++)
        {
        for (int j=0;j<4;j++)
        {
        if (j!=0) 
        printf(" "); 
        printf("i=%d j=%d  %c", i,j, c[i][j]);
        }
        printf("\n");
        }	
*/
	for (int i=0;i<2;i++) {
	for (int j=0;j<4;j++) {
	swap(c[i][j],c[3-i][3-j]);
	}}

	for (int i=0;i<4;i++)
	{
	for (int j=0;j<4;j++)
	{
	if (j!=0) 
	printf(" ");
 
	printf("%c", c[i][j]);
	}
	printf("\n");
	}

	return 0;
}
	
