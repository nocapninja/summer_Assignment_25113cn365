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
    int j = 0;
    while (j < n2)
    {
        v1.push_back(v2[j]);
        j++;
    }
    cout << "The merged array is : " << endl;
    display(v1);
    return 0;
}
