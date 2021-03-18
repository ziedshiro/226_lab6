#include<stdio.h>
int main()
{
    int n,k;
    scanf("%d",&n);
    int i,j,s[n][2],r[n];
    for(i=0;i<n;i++)
        r[i]=0;
    for(i=0;i<n;i++)
        for(j=0;j<2;j++)
            scanf("%d",&s[i][j]);
    for(k=0;k<n;k++)
        for(i=0;i<n;i++)
            for(j=0;j<2;j++)
                if(k+1==s[i][j]&&k!=i)
                    r[k]++;
    for(k=0;k<n;k++)
        printf("%d\n",r[k]);
}
