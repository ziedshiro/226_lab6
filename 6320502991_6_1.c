#include<stdio.h>
#include<string.h>
int main()
{
    int n,i;
    scanf("%d",&n);
    char s[n];
    for(i=0;i<n;i++)
        scanf("%s",&s);
    printf("%c",s[1]);
}
