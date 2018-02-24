#include <stdio.h>

int main() {
 int a,b;
 scanf("%d %d", &a, &b);
 char s[11];
 int i=0;
 scanf("%s", s);
 while(s[i] != '\0') i++;
 printf("%d\n", i);
 if (i >=a && i<=b) printf("YES\n"); else printf("NO\n");
 return 0;
}
