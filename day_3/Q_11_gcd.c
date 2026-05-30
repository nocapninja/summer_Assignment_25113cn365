#include <stdio.h>
int min(int a, int b)
{
    if (a > b)
    {
        return b;
    }
    else
    {
        return a;
    }
    
}

int hcf(int a, int b)
{   int h;
    for (int i = 1; i <= min(a, b); i++)
    {
        if (a % i == 0 && b % i == 0)
        {
             h = i;
        }
    }
    return h;
}

int main()
{
    int num1, num2;
    printf("Enter number 1 :");
    scanf("%d", &num1);
    printf("Enter number 2 :");
    scanf("%d", &num2);
    int h = hcf(num1 , num2);
    printf("The HCF of %d and %d is %d ", num1, num2, h);
    return 0;
}