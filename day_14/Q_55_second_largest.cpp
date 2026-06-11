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
    int max = arr[0];
    for (int i = 1; i < n; i++)
    {
        if (arr[i] >= max)
        {
            max = arr[i];
        }
    }
    int max2=INT8_MIN;
    for (int i = 1; i < n; i++)
    {
        if (arr[i] >= max2 && max != arr[i])
        {
            max2 = arr[i];
        }
    }
    cout << "The second largest element of the array is " << max2;
    return 0;
}