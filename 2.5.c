#include<stdio.h>
#include<conio.h>
void main()
{
    int a,b,c;
    float  mean(int,int ,int);
    printf("Enter the values of a  b  c\n ");
    scanf("%d%d%d",&a,&b,&c);
    printf("THE AVERAGE OF %d %d %d is %.2f\n",a,b,c,mean(a,b,c));

}

float mean(int t1,int t2,  int t2)
{


    float avg= (a+b+c)/3.0;
    return avg;
}
