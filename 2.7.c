/* c implimentation for the swutch procedure */
#include<stdio.h>
#include<conio.h>
int aaa=10;
int bbb=20;
void SWITCH(void);

void main()
{
    printf("aaa = %d bbb = %d",aaa,bbb);
    SWITCH();
    printf("\nAfter calling SWITCH procedure, aaa == %d bbb  ==  %d");

}
void  SWITCH(void)
{
    int temp;
    temp=aaa;
    aaa=bbb;
    bbb=temp;
    return;
}
