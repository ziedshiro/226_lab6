#include<stdio.h>
#include<string.h>
int main()
{
    int n,i,j;
    scanf("%d",&n);
    char s[n][n];
    for(i=0;i<n;i++)
        scanf("%s",s[i]);
    for(i=0;i<n;i++)
        for(j=0;j<n;j++)
        {
            if(s[i][j]>='a'&&s[i][j]<='z')
            {
                s[i][j]-='a'-'A';
                printf("%c",s[i][j]);
            }
        }
}
