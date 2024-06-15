// Write a program to convert the binary number into a decimal number.
#include <stdio.h>

int main()
{
    int N = 11011;

    int a = 1;
    int word = 0;
    while (N != 0)
    {
        word = word + (N % 10) * a;
        N = N / 10;
        a = a * 2;
    }

    printf("%d", word);
    return 0;
}