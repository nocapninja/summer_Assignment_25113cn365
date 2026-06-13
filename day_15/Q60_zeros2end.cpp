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
void sort01(vector<int> &v, int n)
{
    int i = 0;
    int j = 0;
    while (i < n)
    {
        if(v[i]!=0){
            int temp=v[i];
            v[i]=v[j];
            v[j]=temp;
            j++;
        }
        i++;
        
    }
}
int main()
{
    int n;
    cout << "Enter size of array : ";
    cin >> n;
    vector<int> v(n);
    cout << "Enter elements of array : ";
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    sort01(v, n);
    display(v);
}