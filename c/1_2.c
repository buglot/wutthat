#include <stdio.h>
#include <math.h>
int main(){
    printf("Enter the kength of 3 sides of a triangle\n");
    int a,b,c;
    printf("Side A:");
    scanf("%d",&a);
    printf("Side B:");
    scanf("%d",&b);
    printf("Side C:");
    scanf("%d",&c);
    float s = 0.5*(a+b+c);
    float total_area = sqrt(s*(s-a)*(s-b)*(s-c));
    printf("The area of the triangle is %.2f",total_area);
    return 0;
}