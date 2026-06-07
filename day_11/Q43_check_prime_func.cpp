#include<iostream>
using namespace std;
void prime (int x){
    if (x<=0)
    cout<<"Composite Number ";
    else if(x==1)
    cout<<"1 is neither prime nor composite ";
    else {
        int check = 1;
        for(int i = 2; i<x ; i++){
            if (x%i==0){
                check = 0;
            }
        }
        if (check==1){
            cout<<"Prime Number ";
        }
        else
        cout<<"Composite Number ";
    }
    return;
}
int main(){
    int n;
    cout<<"Enter Number :";
    cin>>n;
    prime(n);
    return 0 ;
}