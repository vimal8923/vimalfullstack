//Write a Program to check whether a number is prime or not.
#include <stdio.h>
 int main() 
{
 int a ,b=0;
 printf("enter a value ");
 scanf("%d",&a);
 for (int i = 2; i <= a/2; i++)
 {
   if (a % i==0)
   {
   b=1;
   }
   
 }if (b==0)
 {
   printf("not a prime number");
 }else
 printf("prime number");
 
 


       
return 0;
}