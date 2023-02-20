#include <stdio.h>
#include <math.h>

int main(){
    printf("Enter u :");
    float u, v;
    scanf("%f",&u);
    v=sqrt((u*u)+(2*-9.81*-10));
    printf("Velocity = %.2f",v);
}