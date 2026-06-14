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
    int n1, n2;
    cout << "Enter size of array 1 : ";
    cin >> n1;
    vector<int> v1(n1);
    cout << "Enter elements of array 1 : " << endl;
    input(v1);
    cout << "Enter size of array 2 : ";
    cin >> n2;
    vector<int> v2(n2);
    cout << "Enter elements of array 2 : " << endl;
    input(v2);
    vector<int> v3;
    for (int i = 0; i < n1; i++)
    {
        for (int j = 0; j < n2; j++)
        {
            if (v1[i] == v2[j])
            {
                v3.push_back(v1[i]);
            }
        }
    }
    for (int i = 0; i < n1; i++)
    {
        for (int j = i + 1; j < n1; j++)
        {
            if (v3[i] == v3[j])
            {
                v3.erase(v3.begin() + j);
            }
        }
    }
    cout<<"The common elements in both  arrays are : "<<endl;
    display(v3);
    return 0;
}
