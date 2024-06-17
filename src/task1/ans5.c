// Write a C program to print numbers from 0 to 10 and 10 to 0 using two while loops.
#include <stdio.h>
 int main() 
{
 int i=0;
 printf("Numbers from 0 to 10 \n");
 i=0;
 while (i<=10)
 {
  printf("\t %d ",i);
  i++;
 }
 printf(" \nNumbers from 10 to 0 \n");
 i=10;
 while (i>=0)
 {
    printf("\t %d",i);
    i--;
 }
 
 return 0;
}