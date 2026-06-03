#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter decimal number :";
    cin >> n;
    int temp = n;

    int place = 1;
    int bin = 0;
    while (temp > 0)
    {
        int rem = temp % 2;
        bin += rem * place;
        temp /= 2;
        place *= 10;
    }
    cout << "The binary of " << n << " is " << bin;
    return 0;
}