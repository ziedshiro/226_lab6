#include<stdio.h>
#include<string.h>
int main()
{
    int n,q,j,max;
    scanf("%d %d",&n,&q);
    int s[n],i,b[q],c[q];
    char a[q];
    for(i=0;i<n;i++)
        s[i]=0;
    for(i=0;i<q;i++)
    {
        scanf("%s",&a[i]);
        scanf("%d",&b[i]);
        scanf("%d",&c[i]);
    }
    for(i=0;i<q;i++)
    {

        if(a[i]=='U')
        {
            s[b[i]-1]=c[i];
        }
        else if(a[i]=='P')
        {
            max=s[b[i]-1];

            for(j=b[i]-1;j<c[i];j++)
            {
                if(max<s[j])
                    max=s[j];
            }
        printf("%d\n",max);
        }
    }
}
