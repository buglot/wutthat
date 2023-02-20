#include <stdio.h>

int main(){
    int i,n,min;
    printf("Input#1:");
    scanf("%d",&n);
    min=n;
    for(i=2;i<=5;i++){
        printf("Input#%d:",i);
        scanf("%d",&n);
         
        if(n<min){
            min=n;
        }
    }
    printf("Min: %d",min);

    
    return 0; //ใส่ไม่ใส่ก็ได้
}