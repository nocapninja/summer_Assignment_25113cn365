#include <stdio.h>
int max(int a, int b)
{
    if (a > b)
    {
        return a;
    }
    else
    {
        return b;
    }
    
}


int lcm(int a, int b)
{   

    int i = max(a, b);

    while (1)
    {
        if (i % a == 0 && i % b == 0)
        {
            return i;
        }
        i++;
    }
}


int main()
{
    int num1, num2;
    printf("Enter number 1 :");
    scanf("%d", &num1);
    printf("Enter number 2 :");
    scanf("%d", &num2);
    int h = lcm(num1 , num2);
    printf("The LCM of %d and %d is %d ", num1, num2, h);
    return 0;
}