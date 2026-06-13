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
    cout<<"Enter array elements : ";
    input(v);
    int x;
    cout<<"Enter target : ";
    cin>>x;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(v[i]+v[j]==x){
                cout<<"The pair is ("<<v[i]<<","<<v[j]<<")";
                break;
            }
        }
    }
    return 0;

}