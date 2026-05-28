#include<stdio.h>
int main(){
    int n;
    printf("Enter number :");
    scanf("%d",&n);
    int count = 1;
    while(n>9){
        count++;
        n = n/10;
    }
    printf("Your number has %d digits ",count);
    return 0;
}