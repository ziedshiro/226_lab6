#include<stdio.h>
#include<string.h>
int main()
{
    int n,i;
    scanf("%d",&n);
    char N[2][n];
    for(i=0;i<2;i++)
        scanf("%s",N[i]);
        for(i=0;i<n;i++)
    printf("%c",N[0][i]);
}
