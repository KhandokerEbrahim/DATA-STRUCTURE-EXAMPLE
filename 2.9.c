/* c implimentation of algorithm 2  */
///seive algorithm
#include<stdio.h>
#include<conio.h>
#include<math.h>
int a[100];
void crossout(int ,int);
void main ()
{
    int k,n;
    printf("ENTER THE VALUE OF n \n");
    scanf("%d",&n);
    a[0]=-1;
    for(k=1;k<=n;k++)
    {
        a[k]=k;
    }
    for(k=2;k<=sqrt(n);k++)
    {
        crossout(n,k);
    }
    for(k=2;k<=n;k++)
    {
        if(a[k]!=1)
        {
            printf("%d ",a[k]);
        }
    }
}
void crossout(int n,int k)
{
    int l;
    if(a[k]==1)
        return ;
    for(l=2*k;l<=n;l=l+k)
    {
        a[l]=1;
        return;
    }
}
