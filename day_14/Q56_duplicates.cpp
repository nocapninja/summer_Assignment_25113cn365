#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter number of elements: ";
    cin >> n;

    int arr[n];

    cout << "Enter elements : ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    bool dup = false;

    cout << " Duplicates are: ";
    for (int i = 0; i < n; i++)
    {
        bool p = false;

        for (int k = 0; k < i; k++)
        {
            if (arr[i] == arr[k])
            {
                p = true;
                break;
            }
        }

        if (p)
            continue;

        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] == arr[j])
            {
                cout << arr[i] << " ";
                dup = true;
                break;
            }
        }
    }

    if (!dup)
    {
        cout << "No duplicates dup";
    }

    return 0;
}