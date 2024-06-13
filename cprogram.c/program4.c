#include <stdio.h>
 int main() 
{
  int age;
  printf("enter a value");
  scanf("%d",&age);
  if (age < 18)
  {
   printf("sorry you are not eligible for casting your vote ");

  }else
  printf(" Congratulation You are eligible for casting your vote ");
      
       
return 0;
}