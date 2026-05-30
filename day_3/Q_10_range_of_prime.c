#include <stdio.h>
int main()
{
    int n1,n2;
    printf("Enter lower limit of range :");
    scanf("%d", &n1);
    printf("Enter upper limit of range :");
    scanf("%d", &n2);
   
    for (int i = n1; i <= n2; i++){
    int check = 0;
       for(int j=2;j<i;j++){
        if (i%j == 0 )
        {
            check = 1;
            break;
        }}
        if(check==0){
            printf("%d ",i);
        }
       
    }
    
    
    
    return 0;
}