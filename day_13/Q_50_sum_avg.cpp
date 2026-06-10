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
    int s = 0, avg;
    for (int i = 0; i < n; i++)
    {
        s += arr[i];
    }
    avg = s / n;
    cout << "Sum = " << s << endl
         << "Average = " << avg;
    return 0;
}