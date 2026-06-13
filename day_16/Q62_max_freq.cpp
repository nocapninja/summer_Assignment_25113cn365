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
    cout<<"Enter size of array : ";
    cin>>n;
    vector <int> v(n);
    input(v);
    
    int fmax=0;
    int x=0;
    for(int i=0;i<n;i++){
        int f1=0;
        for(int j=0;j<n;j++){
            
            if(v[i]==v[j]){
                f1++;
            }
            
        }
        if(f1>fmax){
            fmax=f1;
            x=i;
        }
        
    }
    cout<<"The element with max frequency is "<<v[x];
    return 0;
}