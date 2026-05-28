#include<stdio.h>
int fact (int a){
    if(a == 1){
        return 1;
    }
    else {
        return a*fact(a-1);
    }
}
int main(){
    int num;
    printf("Enter number :");
    scanf("%d",&num);
    int f = fact(num);
    printf("The factorial of %d is %d ", num , f);
    return 0; 
}
