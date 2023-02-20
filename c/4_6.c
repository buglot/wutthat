#include <stdio.h>

int main(){
    int numberInput,countEven=0,sumODD=0,ProductEven=1;
    int i;
    for(i=0;i<10;i++){
        printf("Enter number #%d: ",i+1);
        scanf("%d",&numberInput);
        if(numberInput%2==0){
            countEven++;
            ProductEven*=numberInput;
        }else{
            sumODD+=numberInput;
        }
    }
    printf("The number of ODD numbers = %d",10-countEven);
    printf("\nSum of ODD numbers = %d",sumODD);
    printf("\nThe number of EVEN numbers = %d",countEven);
    printf("\nProducts of EVEN numbers = %d",ProductEven);
}