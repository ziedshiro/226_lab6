#include<stdio.h>
int main()
{
    int n,m,i,j,r=0;;
    scanf("%d %d",&m,&n);
    int s[n][m];
    for(i=0;i<n;i++)
        for(j=0;j<m;j++)
        scanf("%d",&s[i][j]);
    for(i=0;i<n;i++)
        for(j=0;j<m;j++)
                r+=s[i][j];
    printf("%d",(m*n)-(r%(m*n)));
}
