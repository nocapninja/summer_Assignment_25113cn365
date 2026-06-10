#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter no of elements in array :";
    cin >> n;
    int arr[n];
    cout << "Enter the elements : " << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int max = INT8_MIN, min = INT8_MAX;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] >= max)
        {
            max = arr[i];
        }
        if (arr[i] <= min)
        {
            min = arr[i];
        }
    }
    cout << "Largest element = " << max << endl
         << "Smallest element = " << min;
    return 0;
}