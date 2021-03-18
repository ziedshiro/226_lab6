#include<stdio.h>
#include<string.h>
int main()
{
    int n,i,j,x=0,y=0,k=0;
    scanf("%d",&n);
    char s[n][n],S[250];
    for(i=0;i<n;i++)
        for(j=0;j<n;j++)
            s[i][j]='.';
    scanf("%s",S);
    if(S[0]=='R')
    {
        s[0][0]='-';
        x++;
    }
    else
    {
        s[0][0]='|';
        y++;
    }
    for(i=1;i<strlen(S);i++)
    {
        if(S[i]=='U'||S[i]=='D')
        {
            s[x][y]='|';
            if(k>0&&S[i]=='U')
                x--;
            else if(k>0&&S[i]=='D')
                x++;


        }
        else
        {
            s[x][y]='-';
            s[x][y]='|';
            if(k>0&&S[i]=='R')
                y++;
            else if(k>0&&S[i]=='L')
                y--;
        }
    }
}
