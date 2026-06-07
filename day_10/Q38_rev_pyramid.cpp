#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter number of rows :";
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if ((i == j) || (i + j <= 2 * n - 1 && j > i))
                cout << "* ";
            else
                cout << "  ";
        }
        for (int k = 1; k <= n; k++)
        {
            if (i + k <= n)
            {
                cout << "* ";
            }
            else
                cout << " ";
        }
        cout << endl;
    }
    return 0;
}