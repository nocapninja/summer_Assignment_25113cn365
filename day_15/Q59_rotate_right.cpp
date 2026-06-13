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
void reversepart(int begin, int end, vector<int> &a)
{
    while (begin <= end)
    {
        int temp = a[begin];
        a[begin] = a[end];
        a[end] = temp;
        begin++;
        end--;
    }
}
int main()
{
    int n;
    cout << "Enter size of array : ";
    cin >> n;
    vector<int> v(n);
    cout << "Enter array elements : " << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    int k;
    cout << "How many steps you want to rotate the array ? : ";
    cin >> k;
    if(k>v.size()){
        k=k%v.size();
       
    }
    reversepart(0, v.size() - 1, v);
    reversepart(0, v.size() - k - 1, v);
    reversepart(v.size() - k, v.size() - 1, v);
    display(v);
    return 0;
}