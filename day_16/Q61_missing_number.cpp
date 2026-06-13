#include<iostream>
#include<vector>
using namespace std;
void input(vector <int> &a){
    for(int i=0;i<a.size();i++){
        cin>>a[i];
    }
}
int main(){
    int n;
    cout<<"Enter array size : ";
    cin>>n;
    vector <int> v(n);
    input(v);
    int Esum = n*(n+1)/2;
    int Asum=0;
    for(int i=0;i<n;i++){
        Asum+=v[i];
    }
    int mis = Esum-Asum;
    cout<<"Missing no = "<<mis;
    return 0;
    
}