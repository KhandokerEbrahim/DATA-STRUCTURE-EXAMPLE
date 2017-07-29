//  program 2.2

///   find out  roor of quardiate  equation
#include<stdio.h>
#include<conio.h>
#include<math.h>

  void  main ()
  {
       int A,B,C,D;
       float X,X1,X2;
       printf("Enter  the values of A,B,C\n");
       scanf("%d%d%d",&A,&B,&C);
       D = B*B - 4*A*C;
       if( D>0)
       {
           X1= ((-1)*B+sqrt(D))/2*A;
           X2= ((-1)*B-sqrt(D))/2*A;
           printf("X1 = %.2f X2 = %.f\n",X1,X2);

       }
   else if(D==0)
   {
       X= ((-1)*B+sqrt(D))/2*A;
       printf("Unique solution X= %.2f\n",X);
   }
   else   printf("No real solution\n");
  }
