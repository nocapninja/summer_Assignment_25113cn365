#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int n;
    cout << "Enter binary number :";
    cin >> n;
    int temp = n;
    int power = 0;
    int dec = 0;
    int digit;
    while (temp > 0)
    {
        digit = temp % 10;
        dec += digit * pow(2, power);
        power++;
        temp /= 10;
    }
    cout << "The decimal of " << n << " is " << dec;
    return 0;
}