#include <stdio.h>
 int main() 
{
int num1,rem1;
printf("enter a number ");
scanf("%d",&num1);
rem1=num1 % 2;
if (rem1==0)
{
  printf("%d even number",num1);

}else
printf("%d odd number ",num1);
    
       
return 0;
}