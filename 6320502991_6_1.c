#include<stdio.h>
#include<string.h>
int main()
{
    int n,i,j;
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
}
