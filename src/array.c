#include <stdio.h>
 int main() 
{
int x,a[10];
printf("enter a value of a");

 for (int x = 0; x<10; x++)
{
scanf(" %d",&a[x]);
}
for (int x = 0; x<10 ; x++)
{
printf("%d",a[x]);
}

       
return 0;
}