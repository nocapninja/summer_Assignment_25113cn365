#include<stdio.h>
int main(){
    int n;
    printf("Enter Number :");
    scanf("%d",&n);
    int store=n;
    int s=0;
    int a=0;
    while (n>0){
        a=n%10;
        s=s*10+a;
        
        n=n/10;
    }
    if(store==s)
    printf("Pallindrome Number");
    else printf("Not Pallindrome Number");
    return 0;
}