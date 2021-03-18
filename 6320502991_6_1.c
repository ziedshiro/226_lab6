#include<stdio.h>
#include<string.h>
int main()
{
    int n,i,j,sw;
    scanf("%d",&n);
    char s[n][n],S[n][n];
    int r[n];
    for(i=0;i<n;i++)
        scanf("%s",s[i]);
    for(i=0;i<n;i++)
        for(j=0;j<n;j++)
        {
            S[i][j]=s[i][j];
            if(s[i][j]>='a'&&s[i][j]<='z')
                S[i][j]-='a'-'A';
        }
    for(i=0;i<n;i++)
        r[n]=i;
    for(i=0;i<n-1;i++)
        for(j=0;j<n-1;j++)
        {
            if(S[j][0]<S[j+1][0])
                {
                   sw=r[j];
                   r[j]=r[j+1];
                   r[j+1]=sw;
                }
        }
    for(i=0;i<n;i++)
        printf("%s",s[r[i]]);
}
