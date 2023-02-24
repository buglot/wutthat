#include <stdio.h>

int main(){
    int numberInput[10],countEven=0,sumODD=0,ProductEven=1;
    int i;
    for(i=0;i<10;i++){
        printf("Enter number #%d: ",i+1);
        scanf("%d",&numberInput[i]);
        if(numberInput[i]%2==0){
            countEven++;
            ProductEven*=numberInput[i];
        }else{
            sumODD+=numberInput[i];
        }
    }
    printf("The number of ODD numbers = %d",10-countEven);
    printf("\nSum of ODD numbers = %d",sumODD);
    printf("\nThe number of EVEN numbers = %d",countEven);
    printf("\nProducts of EVEN numbers = %d",ProductEven);
}