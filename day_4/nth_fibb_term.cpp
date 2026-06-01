#include<iostream>
using namespace std;
int fibb(int x){
    if (x==0)
    return 0;
    if (x==1)
    return 1;
    else
    return fibb(x-1)+fibb(x-2);
}
int main(){
    int n;
    cout<<"Upto how many terms you want to print ?:";
    cin>>n;
    cout<<"The "<<n<<"th term of fibbonacci series is "<<fibb(n);
    return 0;
}