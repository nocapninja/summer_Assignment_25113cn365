#include <iostream>
using namespace std;
int factorial(int x)
{
    if (x == 0)
        return 1;
    else
        return x * factorial(x - 1);
}
int main()
{
    int n;
    cout << "Enter Number : ";
    cin >> n;
    if (n < 0)
    {
        cout << "Negative factorial is not defined ";
    }
    else
    {
        cout << "The factorial of " << n << " is " << factorial(n);
    }
    return 0;
}