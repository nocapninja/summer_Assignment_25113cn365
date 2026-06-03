#include <iostream>
using namespace std;

int main()
{
    int n, count = 0;

    cout << "Enter number: ";
    cin >> n;
    int temp = n;

    while (temp > 0)
    {
        count += temp % 2;
        temp /= 2;
    }

    cout << "Number of set bits in " << n << " are " << count;

    return 0;
}