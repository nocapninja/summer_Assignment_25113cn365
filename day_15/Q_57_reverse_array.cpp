#include <iostream>
#include <vector>
using namespace std;
void display(vector<int> &a)
{
    for (int i = 0; i < a.size(); i++)
    {
        cout << a[i] << " ";
    }
}

int main()
{
    int n;
    cout << "Enter size of the array : ";
    cin >> n;
    vector<int> v(n);
    cout << "Enter array elements : " << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    int i=0;
    int j = v.size() - 1;
    while(i<=j)
    {
        
        int temp=v[i];
        v[i]=v[j];
        v[j]=temp;
        i++;
        j--;
    }
    cout << "The reverse array is : " << endl;
    display(v);
    return 0;
}