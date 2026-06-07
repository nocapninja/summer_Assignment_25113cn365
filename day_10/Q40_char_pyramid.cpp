#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter number of rows :";
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        for(int k =n ; k>i;k--){
            cout<< "  ";
        }
        for (int j = 1; j <= i; j++)
        {
            cout<<(char)(j+64)<<" ";
        }
        for(int l=i-1;l>=1;l--){
            cout<<(char)(l+64)<<" ";
        }
        
        cout << endl;
    }
    return 0;
}