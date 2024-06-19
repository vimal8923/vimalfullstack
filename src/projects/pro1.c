#include <stdio.h>
void add()
{
    int a, b, sum;
    printf("Enter a value \n");
    scanf("%d %d", &a, &b);
    sum = a + b;
    printf("The sum of %d", sum);
}
void sub()
{
    int a, b, sum;
    printf("Enter a value \n");
    scanf("%d %d", &a, &b);
    sum = a - b;
    printf("The sum of %d", sum);
}
void multi()
{
    int a, b, sum;
    printf("Enter a value \n");
    scanf("%d %d", &a, &b);
    sum = a * b;
    printf(" \n The sum of %d", sum);
}
void div()
{
    int a, b, sum;
    printf("Enter a value \n");
    scanf("%d %d", &a, &b);
    sum = a / b;
    printf(" \n The sum of %d", sum);
}
int main()
{
    char op;

    printf("Enter an operator + \n");
    printf("Enter an operator - \n");
    printf("Enter an operator * \n");
    printf("Enter an operator / \n");
    printf("Press x for exit  \n");
    scanf("%c", &op);
    switch (op)
    {
    case '+':
        add();
        break;
    case '-':
        sub();
        break;
    case '*':
        multi();
        break;
    case '/':
        div();
        break;
    case 'x':

        break;

    default:
        printf(" enter in valid value");
        break;
    }

    return 0;
}