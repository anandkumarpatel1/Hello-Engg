#include <stdio.h>
int main()
{
    int num, k;
    scanf("%d", &num);
    for (int i = 0; num != 0; i++)
    {
        k = num % 10;
        num = num / 10;
        printf("%d", k);
    }

    return 0;
}