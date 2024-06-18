#include <stdio.h>
int main()
{
    int num[8] = {50, 33, 40, 90, 20, 100, 55, 109};
    printf("\n Ascending order");
    for (int i = 0; i < 8; i++)
    {
        for (int j = i + 1; j < 8; j++)
        {
            if (num[i] > num[j])
            {
                int a = num[i];
                num[i] = num[j];
                num[j] = a;
            }
        }
        printf("\t %d ", num[i]);
    }
    printf("\n Descending order");
    for (int i = 0; i < 8; i++)
    {
        for (int j = i + 1; j < 8; j++)
        {
            if (num[i] < num[j])
            {
                int a = num[i];
                num[i] = num[j];
                num[j] = a;
            }
        }
        printf("\t %d", num[i]);
    }

    return 0;
}