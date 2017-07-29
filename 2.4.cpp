//linear search
#include<stdio.h>
int main ()
{
    int data[] = { 22,65,1,99,32,17,74,49,33,2 };
    int item =17;
    int i,ret=0,loc=0;
    for(i=0;i<20;i++)
    {
        if(data[i]==item)
        {
            ret=1;
            loc  =i;
        }
    }
    if(ret==1)
    {
        printf("%d if   found  in ara location %d\n",item ,++loc);
    }
    else
    {
        printf("Sorry not found");
    }

}
