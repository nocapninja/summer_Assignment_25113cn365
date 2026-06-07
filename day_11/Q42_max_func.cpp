#include <iostream>
using namespace std;
int max(int x, int y)
{
    if (x > y)
        return x;
    else
        return y;
}
int main()
{
    int n1, n2;
    cout << "Enter first nubmer : ";
    cin >> n1;
    cout << "Enter second number : ";
    cin >> n2;
    cout << "The maximun number is " << max(n1, n2);
    return 0;
}