#include <stdio.h>

int main(void)
{
    int num;
    printf("Enter the number: ");
    scanf("%d", &num);

    for (int i = 1; i <= 12; i++)
    {
        int ans = num * i;
        printf("%d * %d = %d\n", num, i, ans);
    }

    return (0);
}