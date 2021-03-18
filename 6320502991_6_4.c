#include<stdio.h>
int main()
{
    int n,k,x;
    scanf("%d",&n);
    int i,j,s[n][2],r[n],z[n],X;
    for(i=0;i<n;i++)
        r[i]=0;
    for(i=0;i<n;i++)
        z[i]=i+1;
    for(i=0;i<n;i++)
        for(j=0;j<2;j++)
            scanf("%d",&s[i][j]);
    for(k=0;k<n;k++)
        for(i=0;i<n;i++)
            for(j=0;j<2;j++)
                if(k+1==s[i][j]&&k!=i)
                    r[k]++;
    for(i=0;i<n-1;i++)
        for(j=0;j<n-1;j++)
    {
        if(r[j]>r[j+1])
        {
            x=r[j];
            r[j]=r[j+1];
            r[j+1]=x;
            X=z[j];
            z[j]=z[j+1];
            z[j+1]=X;
        }
    }
    printf("%d ",z[n-1]);
    if(r[n-2]==r[n-3])
        printf("%d",z[0]);
    else
        printf("%d",z[n-2]);
}
