#include <stdio.h>
 int main() 
{
 int num,num1;
 printf("enter number");
 scanf("%d",&num);
num1=num%2;
if (num1==0)
{
   printf("\n even number %d",num);
}else
printf("\n odd number %d",num);

       
return 0;
}