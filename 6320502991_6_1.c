#include<stdio.h>
#include<string.h>
int main()
{
    int n,i,j,sw,x;
    scanf("%d",&n);
    char s[n][1000],S[n][1000];
    int r[n],l[n];
    for(i=0;i<n;i++)
        scanf("%s",s[i]);
    for(i=0;i<n;i++)
        {
            S[i][0]=s[i][0];
            if(s[i][0]>='a'&&s[i][0]<='z')
                S[i][0]-=('a'-'A');
        }
    for(i=0;i<n;i++)
        r[i]=i;
    for(i=0;i<n-1;i++)
        for(j=0;j<n-1;j++)
        {
            if(S[j][0]>S[j+1][0])
                {
                    x=S[j][0];
                    S[j][0]=S[j+1][0];
                    S[j+1][0]=x;
                    x=r[j];
                    r[j]=r[j+1];
                    r[j+1]=x;
                }
        }
    for(i=0;i<n;i++)
    {
        printf("%s\n",s[r[i]]);
    }


}
