#include <stdio.h>
int main()
{
    int n;
    printf("Enter number :");
    scanf("%d", &n);
    int check = 0;
    for (int i = 2; i <= n; i++)
    {
        if (n % i == 0 && i != n)
        {
            check = 1;
        }
    }
    if (n == 1)
    {
        printf("1 is niether prime nor composite ");
    }
    else
    {
        if (check == 1)
        {
            printf("Not a prime number ");
        }
        else
        {
            printf("Prime number");
        }
    }
    return 0;
}