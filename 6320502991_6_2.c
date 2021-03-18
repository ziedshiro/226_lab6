#include<stdio.h>
#include<string.h>
int main()
{
    int n,i,j,r=0;
    scanf("%d",&n);
    char N[2][n];
    for(i=0;i<2;i++)
        scanf("%s",N[i]);
    for(i=0;i<n;i++)
          if(N[0][i]==N[1][i])
                r++;
}
