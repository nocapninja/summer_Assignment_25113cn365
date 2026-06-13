#include <iostream>
#include <vector>
using namespace std;
void input(vector<int> &a)
{
    for (int i = 0; i < a.size(); i++)
    {
        cin >> a[i];
    }
}
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
    cout << "Enter array size : ";
    cin >> n;
    vector<int> v(n);
    cout << "Enter array elements : "<<endl;
    input(v);
    for (int i = 0; i < v.size(); i++)
    {
        for (int j = i+1; j < v.size(); j++)
        {
            if (v[i] == v[j])
            {
                v.erase(v.begin() + j);
            }
        }
    }
    cout << "Array without duplicates is  : " << endl;
    display(v);
    return 0;
}