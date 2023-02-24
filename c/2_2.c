#include<stdio.h>
int main(int argc, char const *argv[])
{
    int time;
    printf("Input height: ");
    scanf("%d",&time);

    for(int i = 0 ;i<time;i++){
        for(int j = 0;j<time - i;j++){
            printf("*");
        }
        printf("\n");
    }
}