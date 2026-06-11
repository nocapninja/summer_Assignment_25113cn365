#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter number of elements in array :";
    cin >> n;
    cout << ("Enter the elements : ");
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int x, a;
    cout << "Enter the element to be searched : ";
    cin >> x;
    bool flag = false;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == x)
        {
            flag = true;
            a = i;
            break;
        }
    }
    if (flag == true)
    {
        cout << "The element " << x << " is present on " << a << " index of the array ";
    }
    else
        cout << "The element " << x << " is not present in the array";
    return 0;
}
