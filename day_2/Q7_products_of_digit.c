#include<stdio.h>
int main(){
    int n;
    printf("Enter Number :");
    scanf("%d",&n);
    int s=1;
    while (n>0){
        s=s*(n%10);
        n=n/10;
    }
    printf("The product of digits of your number is : %d",s);
    return 0;
}