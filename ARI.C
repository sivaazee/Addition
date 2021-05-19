/*program to perform all arithmetic operations*/
#include<stdio.h>
#include<conio.h>
void main()
{
   int a,b,result;
   clrscr();
   printf("enter the values of a,b");
   scanf("%d%d",&a,&b);
   result=a+b;
   printf("Addition=%d\n",result);
   result=a-b;
   printf("subtraction=%d\n",result);
   result=a*b;
   printf("Multiplication=%d\n",result);
   result=a/b;
   printf("Division(Quotient)=%d\n",result);
   result=a%b;
   printf("Division(Reminder)(Moduluds)=%d\n",result);
   getch();
}

