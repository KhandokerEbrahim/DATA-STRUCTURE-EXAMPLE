//   program 2.1
/// find out maximum valjue of an array

/* implementation of Algorithm 2.1*/

#include<stdio.h>
#include<conio.h>
void main()
{
    int i,DATA[10]=  {22,65,1,99,32,17,47,49,33,2};
    int N,LOC,MAX,K;
    N=10;
    LOC=0;
    K=0;
    MAX= DATA[0];

    for(i=0;i<10;i++)
    {
        if(DATA[i]>MAX)
        {
            MAX  = DATA[i];
            LOC  = i;
        }
    }

            printf("LOC= %d , MAX = %d",LOC,MAX);
            getch();
         //   exit();


}

