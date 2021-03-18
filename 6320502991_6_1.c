#include<stdio.h>
#include<string.h>
int main()
{
    int n,i;
    scanf("%d",&n);
    char s[n][n];
    for(i=0;i<n;i++)
        scanf("%s",s[i]);
    printf("%c",s[1][1]);
}
