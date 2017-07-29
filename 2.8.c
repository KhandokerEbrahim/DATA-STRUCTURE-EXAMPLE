#include<stdio.h>
#include<conio.h>
int data[10]= {22,65,1,99,32,17,74,49,33,2};
int n,loc1,loc2,first,second;
void main()
{
    void find (int [],int,int,int);
    n=10;
    loc1=-1;
    loc2=-1;
    printf("FIRST = %d,loc1 =%d ,SECOND = %d ,loc2= %d \n",first,loc1,second,loc2);

}
void find(int list [],int len,int l1,int l2)
{
    int temp,k;
    second=list[1];
    l1=0;
    l2=1;
    if(first<second)
    {
        temp =first;
        first=second;
        second= temp;
        l2=0;
        l1=0;




    }
    for(k=2; k<len; k++)
    {
        if(first<list[k])
        {
            second=first;
            first=list[k];
            l2=l1;
            l1=k;
        }
        else if (second<list[k])
        {
            second=list[k];
            l2=k;
        }
    }
    loc1=l1;
    loc2=l2;
}
