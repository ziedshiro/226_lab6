#include<stdio.h>
#include<string.h>
int main()
{
    int n,i,j,x=0,y=0,k=0,sw=1;
    scanf("%d",&n);
    char s[n][n],S[250];
    for(i=0;i<n;i++)
        for(j=0;j<n;j++)
            s[i][j]='.';
    scanf("%s",S);
    if(S[0]=='R')
    {
        s[0][0]='-';
        y++;
    }
    else
    {
        s[0][0]='|';
        x++;
    }
    for(i=1;i<strlen(S);i++)
    {
        if(S[i]=='U'||S[i]=='D')
        {
            if(S[i+1]=='R'||S[i+1]=='L')
            {
                s[x][y]='+';
            }
            else
            s[x][y]='|';
            if(S[i]=='U')
                x--;
            else if(S[i]=='D')
                x++;
        }
        else if(S[i]=='R'||S[i]=='L')
        {
            if(S[i+1]=='U'||S[i+1]=='D')
            {
                s[x][y]='+';
            }
            else
            s[x][y]='-';
            if(S[i]=='R')
                y++;
            else if(S[i]=='L')
                y--;
        }
    }
    for(i=0;i<n;i++)
        {
           for(j=0;j<n;j++)
            printf("%c",s[i][j]);
            printf("\n");
        }
}
