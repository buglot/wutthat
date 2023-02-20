#include <stdio.h>

int main(){
    //for loop
    int i,n;
    float av=0;
    for(i=0;i<5;i++){
        printf("Input#%d: ",i+1);
        scanf("%d",&n);
        av=av+n;
    }
    av=av/i;
    printf("Average: %.2f",av);

    return 0;
}