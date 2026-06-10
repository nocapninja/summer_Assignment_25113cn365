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
    int even=0,odd=0;
    for (int i = 0; i < n; i++)
    {
        if(arr[i]%2==0){
            even++;
        }
        else {
            odd++;
        }
        }
    
    cout << "Even element = " << even << endl
         << "Odd element = " << odd;
    return 0;
}