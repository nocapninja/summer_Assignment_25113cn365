#include <iostream>
using namespace std;
int main()
{
    int n, freq = 0;
    cout << "Enter number of elements in array :";
    cin >> n;
    cout << ("Enter the elements : ");
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int x, a;
    cout << "Enter the element whose frequency to be checked : ";
    cin >> x;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] == x)
        {

            freq++;
        }
    }
    cout << "Frequency of x = " << freq;
}